/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:42:12 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 22:54:25 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "strlib.h"

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

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

int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m])
	{
		m++;
	}
	return (s1[m] - s2[m]);
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


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		final;

	i = 0;
	final = 0;
	sign = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10 + (str[i] - '0');
		i++;
	}
	if (!(sign % 2))
		return (final);
	return (final *= -1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write (1, "2147483648", 10);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

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

char	*my_strchr(const char *str, int c)
{
	char *null;

	null = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		return (char *)str;
	}
	return (null);
}
