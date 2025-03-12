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

int	ft_ultimate_range(int **range, int min, int max)
{
	int		j;
	int		rg_sz;
	int		*null;

	j = 0;
	null = 0;
	if (min >= max)
	{
		*range = null;
		return (0);
	}
	rg_sz = max - min;
	*range = malloc(sizeof(int) * (rg_sz));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[j++] = min++;
	}
	return (rg_sz);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min = 5;
	int	max = 10;
	int	*range;
	int	returnvalue;
	int	i;

	returnvalue = ft_ultimate_range(&range, min, max);
	if (returnvalue == -1)
	{
		printf("Yo stinky this failed.\n");
		return (1);
	}
	else if (returnvalue == 0)
	{
		printf("Bad range.\n");
		return (0);
	}
	i = 0;
	while (i < returnvalue)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
//*/
