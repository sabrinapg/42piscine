/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:58:46 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/06 23:43:09 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int power = atoi(argv[2]);

	if (argc == 3)
	{
		ft_putnbr(ft_iterative_power(nb, power));
	}
	else
		ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb -= nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
*/
