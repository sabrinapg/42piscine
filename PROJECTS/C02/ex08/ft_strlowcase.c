/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:48:16 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 17:47:10 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	s;

	s = 0;
	if (!str)
		return (str);
	while (str[s] != '\0')
	{
		if ((str[s] >= 'A' && str[s] <= 'Z'))
			str[s] += 32;
		s++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "Hahaha sucker";
	char s[] = "ABCDEFG";
	char p[] = "Abcdefg";

	if (*p != '\0')
	{
		printf("%s", ft_strlowcase(s));
	}
	else
		printf("%s", error);
	return (0);
}
*/
