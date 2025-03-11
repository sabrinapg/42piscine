/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:24:33 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 13:30:55 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Allocating Memory for an Array of Integers.

int	main(void)
{
	int n = 5;
	int *arr = (int *)malloc(n * sizeof(int)); //Allocate memory for 5 integers.

	if (arr == NULL) // Check if malloc succeeded
	{
		printf("Memory allocation failed!\n");
		return (1); // Exit with an error.
	}
	arr[0] = 0;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 6;
	arr[4] = 8;

	printf("Array elements:\n");
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

	free(arr);
	return (0);
}


/*
malloc(n * sizeof(int)) allocates enough memory for n integers.
We can use the allocated memory as an array.
*/
