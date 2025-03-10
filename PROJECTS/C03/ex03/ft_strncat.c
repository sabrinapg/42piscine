/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:55:18 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 23:16:51 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while ((src[s] != '\0') && (s < nb))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[50] = "Sabrina";
	char b[] = " Pengiran.";
	unsigned int m;

	printf("%s\n", strncat(a, b, m));

	char c[50] = "Sabrina";
	char d[] = " Pengiran.";
	printf("%s", ft_strncat(c, d, m));
	return (0);
}
*/
