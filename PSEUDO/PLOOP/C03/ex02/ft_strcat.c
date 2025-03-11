/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:28:02 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 12:35:57 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;	
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
#include <unistd.h>
int	main (void)
{
	char a[] = "Hello ";
	char b[] = "World";

	char c[] = "Hello ";
	char d[] = "World";
	printf("%s\n", ft_strcat(a, b));
	printf("%s\n", strcat(c, d));
	return (0);
}
