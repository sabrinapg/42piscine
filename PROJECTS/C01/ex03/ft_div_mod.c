/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:34:59 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/24 16:48:30 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int milk = 50;
	int cartons = 6;
	int div;
	int mod;

	ft_div_mod(milk, cartons, &div, &mod);
	printf("We have a total of %d carts ", div);
	printf("and a %d milk bottles leftover", mod);
	return(0);
} */
