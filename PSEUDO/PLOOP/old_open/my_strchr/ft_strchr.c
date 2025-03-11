/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:18:59 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 16:24:23 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(void)
{
	int	c = 'i';
	const char *text = "Sabrina";
	char *result = my_strchr(text, c);

	if (result)
	{
		printf("Found '%d' at position: %ld\n", c, result - text);
	}
	else
	{
		printf("Character not found.\n");
	}
	result = my_strchr(text, '\0');
	if (result)
	{
		printf("Found null terminator at position: %ld\n", result - text);
	}
	return (0);
}
