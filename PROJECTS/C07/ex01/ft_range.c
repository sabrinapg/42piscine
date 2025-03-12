/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 01:36:43 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/11 01:49:10 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		j;
	int		rg_sz;
	int		*temp;
	int		*null;

	j = 0;
	null = 0;
	if (min >= max)
		return (null);
	rg_sz = max - min;
	temp = malloc(sizeof(int) * (rg_sz));
	if (!temp)
		return (null);
	while (min < max)
	{
		temp[j++] = min++;
	}
	return (temp);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	
	if (!range)
	{
		printf("Malloc failed bro\n");
		return (1);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
*/
