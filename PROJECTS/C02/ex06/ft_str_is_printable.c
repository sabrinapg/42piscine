/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:35:36 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 17:48:53 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	unprintable(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] < 32 || str[m] > 126)
			return (1);
		m++;
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	if (unprintable(str) != 0)
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "Eyyooo this is not printable";
	char c[] = "Well. \t in the Germany we need to recycle";
	char del[] = {127, 0};
	char s[] = "Hi, this is me - a normal string";
	char n[] = "";

	if (ft_str_is_printable(c) == 0)
		printf("%s\n", error);
	else
		printf("%s\n", c);

	if (ft_str_is_printable(del) == 0)
		printf("%s\n", error);
	else
		printf("%s\n", del);

	if (ft_str_is_printable(s) == 1)
		printf("%s\n", s);
	else
		printf("%s\n", error);

	if (ft_str_is_printable(n) == 1)
		printf("Empty string is valid\n");
	else
		printf("%s\n", error);

	return (0);
}
*/
