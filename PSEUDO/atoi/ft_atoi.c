/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:32:49 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/09 16:35:33 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_atoi(char *str, char *key)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] == '0')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		key[j] = str[i];
		i++;
		j++;
	}
}

#include <stdio.h>
int	main(void)
{
	char *key = (char *)malloc(sizeof(char));
	ft_atoi("    123", key);
	printf("%s\n", key);
	key = 0;
	ft_atoi("+123", key);
	printf("%s\n", key);
	key = 0;
	ft_atoi("+  123", key);
	printf("E: %s\n", key);
	key = 0;	
	ft_atoi("-123", key);
	printf("%s\n", key);
	key = 0;	
	ft_atoi("- 123", key);
	printf("E: %s\n", key);
	key = 0;	
	ft_atoi("123 ", key);
	printf("%s\n", key);
	key = 0;	
	ft_atoi("123a", key);
	printf("%s\n", key);
	key = 0;	
	ft_atoi("00123", key);
	printf("%s\n", key);
	key = 0;	
	ft_atoi(" ++123", key);
	printf("E: %s\n", key);
	key = 0;
	ft_atoi("--123", key);
	printf("E: %s\n", key);
	return (0);
}
