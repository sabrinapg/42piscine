/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:39:00 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 11:47:15 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (!(str[r] >= 48 && str[r] <= 57))
			return (0);
		r++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char error[] = "No numbers or empty string!!";
	char s[] = "2674789";
	char a[] = "swag";
	char n[] = "";

	if (ft_str_is_numeric(s) != 0)
	{
		printf("%s", error);
	}
	else
		printf("%s", s);
	return (0);
}
*/
