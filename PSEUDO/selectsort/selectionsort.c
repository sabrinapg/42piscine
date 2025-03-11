/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selectionsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:14:09 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/10 20:22:49 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	selectionSort(int arr[], int n)
{
	int	i;
	int	j;
	int	min_idx;
	int	temp;

	i = 0;
	while (i < n - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
	if (min_idx != i)
	{	
        	temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
	i++;
	}
}

void	printArray(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	printArray(arr, n);

	selectionSort(arr, n);

	printf("Sorted array: ");
	printArray(arr, n);

	return (0);
}
