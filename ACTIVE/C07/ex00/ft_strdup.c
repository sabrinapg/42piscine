/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:53:20 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/11 01:36:22 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*null;
	char	*copy;

	i = 0;
	len = ft_strlen(src) + 1;
	copy = (char *)malloc(len);
	null = 0;
	if (!copy)
		return (null);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	*src = "Sabrina";
	const char *src1 = "Sabrina";

	printf("Created: %s\n", ft_strdup(src));
	printf("Control: %s\n", strdup(src1));
	
	return (0);
}
*/
