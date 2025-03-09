/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:22:07 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 17:22:12 by uponci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	write_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

void	string_to_array(char *str, int arr[], int *count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	*count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			arr[j++] = str[i] - '0';
			(*count)++;
		}
		i++;
	}
}
