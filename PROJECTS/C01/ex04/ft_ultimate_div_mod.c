/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:05:20 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/24 16:49:17 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	milk = 50;
	int	carts = 6;

	ft_ultimate_div_mod(&milk, &carts);
	printf("We have approximately %d milk carts", milk);
	printf(" and %d milk bottles left.\n", carts);
	return (0);
}
*/
