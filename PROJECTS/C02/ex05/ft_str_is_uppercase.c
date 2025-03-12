/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:27:05 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/25 12:34:39 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if (!(str[u] >= 65 && str[u] <= 90))
			return (0);
		u++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "no uppercase letters or empty string!!";
	char s[] = "i need to go home ahah";
	char n[] = "";
	char M[] = "PLEASE!!";

	char cut = ft_str_is_uppercase(s);
	if (cut != 0)
	{
		printf("%s", error);
	}
	else
		printf("%s", s);
	return (0);
}
*/
