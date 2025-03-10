/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:35:09 by whuth             #+#    #+#             */
/*   Updated: 2025/03/09 23:29:11 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == ':')
		return (1);
	return (0);
}

int	ft_arg_check_first(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] == 32 || (arg[i] >= 9 && arg[i] <= 13))
		++i;
	if (arg[i] == '+')
		++i;
	return (i);
}

int	ft_arg_check(char *arg, char *key)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	i = ft_arg_check_first(arg);
	while (arg[i] == '0')
	{
		++i;
		check = 1;
	}
	if (!(arg[i] >= '1' && arg[i] <= '9') && !check)
		return (0);
	j = 0;
	if (!(arg[i] >= '1' && arg[i] <= '9') && check)
	{
		key[0] = '0';
		key[1] = 0;
		return (1);
	}
	while (arg[i] >= '0' && arg[i] <= '9')
		key[j++] = arg[i++];
	key[j] = 0;
	return (1);
}

char	*ft_strcmp(char *dict, char *nb_len)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i])
	{
		j = 0;
		while (dict[i] == nb_len[j])
		{
			if (nb_len[j + 1] == 0 && (dict[i + 1] < '0' || dict[i + 1] > '9'))
				return (&dict[i + 1]);
			++j;
			++i;
		}
		i++;
	}
	return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "1000000000000000000000000000000000000";

	printf("%d\n", ft_strlen(str));
	char	*key = (char*)malloc(10000 * sizeof(char));
	char	arg[] = "1234      0000000000021234566012a314";

	if (ft_arg_check(arg, key))
		printf("%s\n", key);
	else
		printf("Wrong Arg\n");
	free(key);
}
//*/
