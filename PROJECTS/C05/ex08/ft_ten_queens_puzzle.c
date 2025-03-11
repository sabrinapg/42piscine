/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apak <apak@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:02:14 by apak              #+#    #+#             */
/*   Updated: 2025/03/04 10:03:34 by apak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_is_placeable(char placement[10 + 1], int col, int row)
{
	int	col_prev;
	int	row_prev;

	col_prev = 0;
	while (col_prev < col)
	{
		row_prev = placement[col_prev] - '0';
		if (row_prev == row || (col - col_prev) == ft_abs(row - row_prev))
			return (0);
		++col_prev;
	}
	return (1);
}

void	ft_recursive_solve(char placement[10 + 1], int *count, int col)
{
	int	row;

	if (col >= 10)
	{
		write(STDOUT_FILENO, placement, 11);
		++(*count);
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_placeable(placement, col, row))
		{
			placement[col] = '0' + row;
			ft_recursive_solve(placement, count, col + 1);
		}
		++row;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	placement[10 + 1];
	int		count;

	placement[10] = '\n';
	count = 0;
	ft_recursive_solve(placement, &count, 0);
	return (count);
}
