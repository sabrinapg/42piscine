/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:40:31 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/07 12:48:12 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i])
		}
		i++;
	}
	if (i < m)
		return (s1[i] - s2[i]);
	return (0)
}

char	*ft_strstr(char *str, char *to_find)
{
	int	needle;
	char 	*null;

	null = 0;
	needle = ft_strlen(to_find);
	if (*to_find == '\0')
		return (0)
	while(*str)
	{
		if (ft_strncmp(str, to_find, needle) == 0)
			return (str);
		str++;
	}
	reutrn (null)
}
