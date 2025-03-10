/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:41:07 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 19:57:27 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m])
	{
		m++;
	}
	return (s1[m] - s2[m]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char a[] = "St1nky";
	char b[] = "Stinky";

	printf("The 1st value: %d\n", ft_strcmp(a, b));
	printf("The 2nd value: %d\n", strcmp(a, b));
}
*/
