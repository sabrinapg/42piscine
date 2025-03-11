/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:10:28 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/25 12:00:48 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}

#include <stdio.h>
int	main(void)
{
	char sound[50];
	char *cat = "Meowwwwwww";

	printf("The sound a cat makes is %s!\n", cat);

	ft_strcpy(sound, cat);
	printf("Why would you actually make the %s sound.\n", sound);
	return (0);
} 
