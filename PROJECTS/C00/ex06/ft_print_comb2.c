/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:49:30 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/23 18:21:13 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	danumbers(int nb)
{
	int	first;
	int	second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		putchar (first + '0');
		putchar (second + '0');
	}
	else
	{
		putchar('0');
		putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (right <= 99)
		{
			danumbers(left);
			putchar(' ');
			danumbers(right);
			if (left < 98 || right < 99)
			{
				putchar(',');
				putchar(' ');
			}
			right++;	
		}
		left++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
} */
