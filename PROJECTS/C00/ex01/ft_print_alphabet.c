/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:34:06 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/20 14:17:16 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;
	int	alpha;

	i = 1;
	alpha = 97;
	while (i < 27)
	{
		write(1, &alpha, 1);
		i++;
		alpha++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
