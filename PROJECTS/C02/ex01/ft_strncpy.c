/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:26:55 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 16:20:46 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	y;

	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char sound[50];
	char *cat = "Meowwwwwww";

	printf("I love my cat, she has the cutest %s\n", cat);
	ft_strncpy(sound, cat, 4);
	printf("Stop saying the %s sound.\n", sound);
	return (0);
}
*/
