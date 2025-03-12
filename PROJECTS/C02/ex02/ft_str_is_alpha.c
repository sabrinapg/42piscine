/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:31:16 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/03 17:31:48 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
	{
		if (!((str[w] >= 65 && str[w] <= 90) 
				|| (str[w] >= 97 && str[w] <= 122)))
			return (0);
		w++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "No alphabets or empty string!!";
	char s[] = ", . / 12358";
	char a[] = "swag";
	char n[] = "";

	if (ft_str_is_alpha(s) != 0)
	{
		printf("%s", error);
	}
	else
		printf("%s", s);
	return (0);
}
*/
