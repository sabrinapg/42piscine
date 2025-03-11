/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:48:18 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 11:59:21 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)	
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "ME0W";
	char a[] = "MEOW";
	unsigned int m = 4;

	printf("%d\n", ft_strncmp(s, a, m));
	printf("%d\n", strncmp(s, a, m));
	return (0);
}
