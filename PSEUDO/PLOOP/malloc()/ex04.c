/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:57:54 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 14:49:23 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ex04: Dynamically allocating memory for an Array

/*
If you don't know the size of the array at compile time, 
you can allocate memory dynamically for an array of integers (of any type).
Here's an example where we allocate memory for an arrya based on user input.

*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n = 5;
	int	i = 0;
	int *arr = (int *)malloc(n * sizeof(int));

	if (arr == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	while (i < 2)
	{
		arr[0] = 0;
		arr[1] = arr[0] + 2;
		arr[2] = arr[1] + 2;
		arr[3] = arr[2] + 2;
		arr[4] = arr[3] + 2;
		i++;
	}
	printf("Array values: \n");
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

	free(arr);

	return (0);
}

/*

Hardcoded the array size to n = 5. We've asked to set the size of the array to 5 rather than asking the user for input. 

*/
