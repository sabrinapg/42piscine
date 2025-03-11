/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:17:26 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/20 20:20:36 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Using recursion (function calling itself)

#include <unistd.h>

void	ft_numbers(int n)
{
	if (n < 1)
	{	
		return;
	}

	char c = '0' + n; // Convert integer n into a character
	write(1, &c, 1); // write character c

	ft_numbers(n - 1);
}

int	main(void)
{
	int n = 5;
	ft_numbers(n);
	return (0);
}
