/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:38:15 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/24 17:52:17 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	print_index(int combn[], int n)
{
	int	p;
	int	maks;

	p = 0;
	maks = 10 - n;
	while (p < n)
	{
		if (combn[p] == maks)
			return (p - 1);
		if (p == (n - 1) && combn[p] < maks)
			return (p);
		p++;
		maks++;
	}
	return (-1);
}

void	current_comb(int comb[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
}

void	runner(int comb[], int n, int index)
{
	int	i;

	i = index + 1;
	comb[index]++;
	while (i <= n)
	{
		comb[i] = comb[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[10];
	int	i;
	int	idx;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			combn[i] = i;
			i++;
		}
		while (print_index(combn, n) != -1)
		{
			idx = print_index(combn, n);
			current_comb(combn, n);
			write(1, ", ", 2);
			runner(combn, n, idx);
		}
		current_comb(combn, n);
	}
}

/*
int	main(void)
{
	ft_print_combn(5);
	return(0);
}
*/
