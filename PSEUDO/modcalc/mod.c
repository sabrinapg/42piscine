/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:23:15 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 18:23:20 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int milk = 5;
	int cartons = 3;
	int div;
	int mod;

	ft_div_mod(milk, cartons, &div, &mod);
	printf("We have a total of %d carts ", div);
	printf("and a %d milk bottles leftover", mod);
	return(0);
}

