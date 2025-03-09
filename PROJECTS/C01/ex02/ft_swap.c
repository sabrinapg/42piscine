/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:28:47 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/23 20:34:21 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int monkeys = 32;
	int bananas = 45;
	printf("Value of a:%d. Value of b:%d.\n", monkeys, bananas);
	ft_swap(&monkeys, &bananas);
	printf("Value of a:%d. Value of b:%d.\n", monkeys, bananas);
	return (0);
}
*/
