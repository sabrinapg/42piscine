/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   meow.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:38:09 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/23 16:22:12 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// recursive function to calulate factorial
int	factorial(int n)
{
	if (n == 0)
	{
		return (1); // Base case
	}
	return n * factorial(n - 1); // Recursive part
}

// Convert integers into string
void	itoa(int num, char *str)
{
	int	i;
	int	isNegative;

	i = 0;
	isNegative = 0;

	if (num == 0)
	{
		str[i++] = '0';
	}
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	while (num != 0)
	{
		str[i++] = num % 10 + '0';
		num = num / 10;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	
}
