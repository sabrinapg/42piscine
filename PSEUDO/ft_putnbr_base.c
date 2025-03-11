# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putnbr_base                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 00:14:04 by dkpg-md-          #+#    #+#              #
#    Updated: 2025/03/09 00:14:08 by dkpg-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

"0123456789"
"0123456789ABCDEF"
"01"


/*
#include <unistd.h>
void	ft_putchar(char c, char *base)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", base_value);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > base_value - 1)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(base[nb % 10]);
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
