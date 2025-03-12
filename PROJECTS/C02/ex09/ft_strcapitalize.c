/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:02:33 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/25 21:56:26 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	low(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
		}
		str++;
	}
	return (*str);
}

char	first(char *str)
{
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] -= 32;
	}
	return (str[0]);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (*str == '\0')
		return (str);
	low(str);
	first(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "Sabrina, your complicated code didn't work";
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(s);
	if (*s != '\0')
	{
		printf("%s", s);
	}
	else
		printf("%s", error);
	return (0);
}
*/
