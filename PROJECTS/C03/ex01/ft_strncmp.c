/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:41:07 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/02/26 22:40:35 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	m;

	m = 0;
	if (n == 0)
		return (0);
	while (m < n && s1[m] && s2[m])
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
		m++;
	}
	if (m < n)
		return (s1[m] - s2[m]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	unsigned int p = 4;
	char a[] = "St1nky";
	char b[] = "Stinky";

	printf("The test value: %d\n", ft_strncmp(a, b, p));
	printf("The real value: %d", strncmp(a, b, p));
}
*/
