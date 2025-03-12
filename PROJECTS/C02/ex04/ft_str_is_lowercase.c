/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:02:44 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/25 12:26:23 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (!(str[l] >= 97 && str[l] <= 122))
			return (0);
		l++;
	}
	return (1);
}
/*
#include <stdio.h>
int 	main(void)
{
	char error[] = "No lowercase letters or empty string!!";
	char A[] = "I LOVE 42 BERLIN";
	char s[] = "i love 42 berlin";
	char n[] = "";

	char cut = ft_str_is_lowercase(s);
	if (cut != 0)
	{
		printf("%s", error);
	}
	else
		printf("%s", s);
	return (0);
}
*/
