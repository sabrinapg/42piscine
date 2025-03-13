/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:17:10 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/13 14:24:38 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_revalpha(void)
{
	int 	i;
	char	alpha;
	char	upper;

	alpha = 'z';
	i = 0;
	while (i < 26)
	{
		if (i % 2 != 0)
		{
			upper = alpha - 32;
			write(1, &upper, 1);
		}
		if (i % 2 == 0)
		{
			write (1, &alpha, 1);
		}
		alpha--;
		i++;
	}
}

int	main(void)
{
	ft_revalpha();
	return (0);
}
