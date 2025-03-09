/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asergina <asergina@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:12:24 by asergina          #+#    #+#             */
/*   Updated: 2025/02/22 23:59:41 by asergina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error(int x, int y)
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

void	top_row(int x)
{
	int	i;

	ft_putchar('A');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	bottom_row(int x)
{
	int	i;

	ft_putchar('C');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}

void	middle_rows(int x)
{
	int	i;

	ft_putchar('B');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	row;

	if (error(x, y) != 0)
		return ;
	row = 0;
	while (row < y)
	{
		if (row == 0)
		{
			top_row(x);
		}
		else if (row == y - 1)
		{
			bottom_row(x);
		}
		else
		{
			middle_rows(x);
		}
		write (1, "\n", 1);
		row++;
	}
}
