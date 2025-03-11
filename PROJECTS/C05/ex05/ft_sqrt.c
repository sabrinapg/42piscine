/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:19:36 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/10 18:35:37 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
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
	int	sqrt;
	if (argc > 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	nb = ft_atoi(argv[1]);
	sqrt = ft_sqrt(nb);
	ft_putnbr(sqrt);
	write(1, "\n", 1);
	return (0);
}
*/
