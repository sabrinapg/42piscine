/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:17:00 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 13:24:14 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// ex00: Allocating Memory for an Integer

int	main(void)
{
	int *ptr = (int *)malloc(50);

	if (ptr == NULL)
	{
		printf("Memory allocation failed! \n");
		return (1); // Exit with an error.
	}

	*ptr = 10;

	printf("Value: %d\n", *ptr);

	free(ptr);
	return (0);
}

/*
Basic Syntax of Malloc:

void	*malloc(size_t size);

size: the number of bytes of memory you want to allocate
malloc: returns a pointer to the allocated memory, or NULL if the allocation fails

malloc(sizeof(int)) = This allocates enought memory to store one int (typicallz 4 bytes)
*ptr = 10 = Sets the value of the allocated memory
free(ptr) = Frees the allocated memory to prevent memory leaks.

*/
