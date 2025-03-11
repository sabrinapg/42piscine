/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:44:23 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 00:02:25 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int power = atoi(argv[2]);
	if (argc == 3)
	{
		ft_putnbr(ft_recursive_power(nb, power));
	}
	else
		write(1, "\n", 1);
	return (0);
}
*/
