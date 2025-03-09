/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:30:12 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 20:02:03 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	is_valid(t_Puzzle *puzzle, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (puzzle->grid[row][i] == num
		|| puzzle->grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(t_Puzzle *puzzle, int row, int col)
{
	int	num;

	if (row == 4)
		return (1);
	if (col == 4)
		return (solve(puzzle, row + 1, 0));
	if (puzzle->grid[row][col] != 0)
		return (solve(puzzle, row, col + 1));
	num = 1;
	while (num <= 4)
	{
		if (is_valid(puzzle, row, col, num))
		{
			puzzle->grid[row][col] = num;
			if (solve(puzzle, row, col + 1))
				return (1);
			puzzle->grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
