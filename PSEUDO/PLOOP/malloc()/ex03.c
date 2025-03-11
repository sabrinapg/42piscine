/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:31:41 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 13:51:51 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Using calloc

int	main(void)
{
	int n = 5;
	int *arr = (int *)calloc(n, sizeof(int));

	if (arr == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}

	arr[1] = arr[0] + 1;
	arr[2] = arr[1] + 1;
	arr[3] = arr[2] + 1;
	arr[4] = arr[3] + 1;

	printf("Array elements after calloc:\n");
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

	free(arr);

	return (0);
}

/*
calloc(n, sizeof(int)): Allocates memory for n integers and initalises them to zero.
It's useful when you want to ensure all allocated memory is set to zero.
*/
