/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:09:35 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 00:10:18 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
int	ft_atoi(char *str)
{
	int i;
	int sign;
	int final;

	i = 0;
	sign = 0;
	final = 0;
	while ((str[i] > 9 && str[i] < 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2)
		final = -final;
	return (final);
}
int	main(int argc, char **argv)
{
	int num = ft_atoi(argv[1]);
	int fib = ft_fibonacci(num);
	if (argc == 2)
	{
		if (num < 0)
		{
			write(1, "Invalid index for Fibonacci\n", 28);
			return (1);
		}
		ft_putnbr(fib);
	}
	else
		write(1, "Haha Sucker\n", 12);
	return (0);
}
*/
