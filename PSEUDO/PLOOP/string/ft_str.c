/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:45:23 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/25 18:51:45 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcapitalise(char *str)
{
	int i;

	i = 0;
	while (*str[i] = '\0')
	{
		
		i++;
		str++;
	}
}

#include <stdio.h>
int	main(void)
{
	char error[] = "Didn't work";
	char s[] = "hello, 42mot world";

	printf("%s", error);
	ft_strcapitalise(s);
	printf("%s", s)
	return (0);
}
