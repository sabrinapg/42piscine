/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:38:41 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/23 00:58:06 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	negatif(int *nb)
{
	if (*nb < 0)
	{
		putchar('-');
		*nb = -(*nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	negatif(&nb);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	putchar(nb % 10 + '0');
}

/*
int	main(void)
{
	ft_putnbr(100);
	putchar('\n');
	ft_putnbr(-2147483648);
	putchar('\n');
	ft_putnbr(42);
	putchar('\n');
	ft_putnbr(-123);
		
	return(0);
}
*/
