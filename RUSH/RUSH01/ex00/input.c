/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:02:01 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 19:56:22 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	validate_input(char *input)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '9')
			count++;
		else if (input[i] != ' ')
			return (write_error());
		i++;
	}
	if (count % 4 != 0)
		return (write_error());
	return (1);
}

void	allocate_views(int views[4][4], char *input)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		views[i / 4][i % 4] = input[i] - '0';
		i++;
	}
}

void	fill_views(int values[], int views[4][4], int grid_size)
{
	int	i;

	i = 0;
	while (i < grid_size)
	{
		views[0][i] = values[i];
		views[1][i] = values[i + grid_size];
		views[2][i] = values[i + (grid_size * 2)];
		views[3][i] = values[i + (grid_size * 3)];
		i++;
	}
}
