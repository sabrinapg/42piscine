/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:54:03 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 10:59:47 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	number;
	int	i;

	number = '9';
	i = 10;
	while (i > 0)
	{
		write(1, &number, 1);
		number--;
		i--;
	}
	return (0);
}
