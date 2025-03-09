/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:09:36 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/20 16:54:20 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0 || n == '\0')
	{
		write (1, "P", 1);
	}
	else
		write (1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(2);
	ft_is_negative(-3);
	ft_is_negative('\0');
	return (0);
}
*/
