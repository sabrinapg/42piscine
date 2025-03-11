/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:14:00 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/04 16:16:58 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*eraser(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int	sign(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-') 
			count++;
		i++;	
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = sign(str);
	str = eraser(str);
	if (count % 2 != 0)
	{
		ft_putchar('-');
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_atoi(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
// Evaluators plzzzzz copy this  " ---+--+1234ab567"
*/
