/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:56:15 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 15:19:59 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ex06: Dynamically Allocate Memory for a 2D Array.
 
void	write_int(int value)
{
	char buffer[12]; // To store the string rep of the integers
	int i = 0;

	if (value == 0) // Handle the case of 0
	{
		buffer[i++] = '0';
	}
	else
	{
		int temp = value; // Convert int to string (in reverse order)
		while (temp > 0)
		{
			buffer[i++] = (temp % 10) + '0'; // What is this?
			temp /= 10; // What is this?
		}
	}

	int j = i - 1; // Write the number as a string in reverse order
	while (j >= 0)
	{
		write(1, &buffer[j], 1); // Write the character to stdout
		j--;
	}
}

int	main()
{
	int	rows = 3;
	int	cols = 3;

	// Dynamically allocate memory for the 2D array
	int **matrix = (int **)malloc(rows * sizeof(int *)); //
	matrix[0] = (int *)malloc(cols * sizeof(int)); // For first row
	matrix[1] = (int *)malloc(cols * sizeof(int)); // For second row
	matrix[2] = (int *)malloc(cols * sizeof(int)); // For third row

	// Assign values to the 2D array
	int	i = 0;
	int	value = 1;
	while (i < rows)
	{
		int j = 0;
		while (j < cols)
		{
			matrix[i][j] = value;
			value++; // Increment the vlaue
			j++;
		}
		i++;
	}

	write(1, "Matrix: \n", 9);
	i = 0;
	while (i < rows)
	{
		int j = 0;
		while (j < cols)
		{
			write_int(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}

	free(matrix[0]);
	free(matrix[1]);
	free(matrix[2]);
	free(matrix);

	return (0);
}
