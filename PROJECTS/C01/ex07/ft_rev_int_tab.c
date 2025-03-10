/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:30:50 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/24 16:49:57 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	box;

	i = 0;
	size--;
	while (i < size)
	{
		box = tab[i];
		tab[i] = tab[size];
		tab[size] = box;
		size--;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 5;
	int	i = 0;
	int	array[5] = {1, 8, 5, 7, 2};

	ft_rev_int_tab(array, 5);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	return (0);
}
*/
