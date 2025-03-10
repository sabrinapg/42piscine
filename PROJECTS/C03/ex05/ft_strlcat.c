/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:46:02 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/04 00:06:38 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	if (n == 0)
		return (0);
	while (dest[d] != '\0')
		d++;
	while ((src[s] != '\0') && (d < n - 1))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

/*
// compile with -lbsd flag
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	a[] = "Meow";
	char	b[] = "A cat says: ";
	unsigned int m = 2;

	unsigned int	cut = strlcat(a, b, m);

	printf("Length of the real concat: %u\n", cut);
	
	char	c[] = "Meow";
	char	d[] = "A cat says: ";
	unsigned int	scissors = ft_strlcat(c, d, m);
	printf("Length of the mimicked concat: %u\n", scissors);
	return (0);
}
*/
