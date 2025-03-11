/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:09:44 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/10 21:10:06 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (temp < nb)
	{
		if (nb % temp == 0)
			return (0);
		temp++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdlib.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	final;

	i = 0;
	sign = 1;
	final = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10 + (str[i] - '0');
		i++;
	}
	return (final * sign);
}

void	ft_putnbr(int nb)
{
	char	c;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1; 
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);	
}

int	main(int argc, char *argv[])
{
	int	nb;
	int	pur;
	if (argc > 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	nb = ft_atoi(argv[1]);
	pur = ft_is_prime(nb);
	ft_putnbr(pur);
	write(1, "\n", 1);
	return (0);
}
*/
