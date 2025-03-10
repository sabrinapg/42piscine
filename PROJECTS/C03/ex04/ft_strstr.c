/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 23:17:54 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 23:41:45 by dkpg-md-         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	m;

	m = 0;
	if (n == 0)
		return (0);
	while (m < n && s1[m] && s2[m])
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
		m++;
	}
	if (m < n)
		return (s1[m] - s2[m]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		needle;
	char	*null;

	null = 0;
	if (*to_find == '\0')
		return (str);
	needle = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, needle) == 0)
			return (str);
		str++;
	}
	return (null);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "Sabrina";
	char f[] = "m";

	printf("%s\n", strstr(s, f));

	char m[] = "Sabrina";
	char n[] = "m";
	printf("%s", ft_strstr(m, n));
	return (0);
}
*/
