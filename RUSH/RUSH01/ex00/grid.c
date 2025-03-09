/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:49:47 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 16:49:52 by uponci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

void	ft_ultimate_grid_size(int *grid_size, int *values)
{
	int	count;

	count = 0;
	while (values[count])
		count++;
	*grid_size = count / 4;
}

void	create_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_grid(int grid[4][4], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putnbr(grid[i][j]);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
