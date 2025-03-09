/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:30:07 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/22 19:53:17 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	fl(int column, int x, int row, int y)
{
	if (column == 0 && row == 0)
	{
		ft_putchar('A');
	}
	else if (column == x - 1 && row == 0)
	{
		ft_putchar('C');
	}
	else if (column == 0 && row == y - 1)
	{
		ft_putchar('A');
	}
	else if (column == x - 1 && row == y - 1)
	{
		ft_putchar('C');
	}
	else
		ft_putchar('B');
}

void	space(int column, int x)
{
	if (column == 0 || column == x - 1)
	{
		ft_putchar('B');
	}
	else 
		ft_putchar(' ');
}

int	bounds(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Sorry, real numbers only :>(\n", 29);
		return (1);
	}
	else if (x > 2147483647 || y > 2147483647)
	{
		write(1, "Toooo big, rejected hihi\n", 25);
		return (2);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	if (bounds(x, y) != 0)
		return ;
	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (row == 0 || row == y - 1)
			{
				fl(column, x, row, y);
			}
			else
				space(column, x);
			column++;
		}
		write (1, "\n", 1);
		row++;
	}
}
