/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:09:55 by whuth             #+#    #+#             */
/*   Updated: 2025/03/09 22:33:54 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
void	ft_mod_o(char *dict, char *key, int len_key, int index)
{
	int	i;
	int	milli;

	milli = 1;
	if (key[index] != '0')
	{
		ft_numbers(dict, key, index);
		if (key[index + 1] != '\0')
			write(1, " ", 1); 
	}
	if (key[index] == '0' && key[index - 1] == '0' && key[index - 2] == '0')
		milli = 0;
	if (len_key > 1 && milli)
	{
		ft_mil(dict, len_key);
		i = index + 1;
		while (key[i])
		{
			if (key[i] != '0')
			{
				write(1, " ", 1);
				break ;
			}
			i++;
		}
	}
}

void	ft_mod_z(char *dict, char *key, int index)
{
	ft_numbers(dict, key, index);
	if (key[index + 1] != '\0')
		write(1, " ", 1);
	ft_hundred(dict);
	if (!(key[index + 3] == '\0' && key[index + 2] == '0' && key[index + 1] == '0'))
		write(1, " ", 1);
}

void	ft_mod_t(char *dict, char *key, int index)
{
	if (key[index] != '1')
	{
		ft_two_digit(dict, key, index, 0);  // Call for multiples of ten
		if (!(key[index + 1] == '0' && key[index + 2] == '\0'))
			write(1, " ", 1);
	}
	else
	{
		ft_two_digit(dict, key, index, 1);  // Call for teens (10-19)
		key[index + 1] = '0';
		if (key[index + 2] != '\0')
			write(1, " ", 1);
	}
}
/*
void	ft_mod_t(char *dict, char *key, int index)
{
	if (key[index] != '1')
	{
		ft_ty(dict, key, index);
		if (!(key[index + 1] == '0' && key[index + 2] == '\0'))
			write(1, " ", 1);
	}
	else
	{
		ft_tens(dict, key, index);
		key[index + 1] = '0';
		if (key[index + 2] != '\0')
			write(1, " ", 1);
	}
}
*/
void	ft_get_values(char *dict, char *key, int len_key)
{
	int	i;

	i = 0;
	while (len_key > 0)
	{
		if (!(len_key % 3) && key[i] != '0')
			ft_mod_z(dict, key, i);
		else if((len_key % 3) == 1)
			ft_mod_o(dict, key, len_key, i);
		else if ((len_key % 3) == 2 && key[i] != '0')
			ft_mod_t(dict, key, i);
		--len_key;
		++i;
	}
}

void	ft_parsing(char *input)
{
	char	*dict;
	char	*dict_name;
	char	*key;
	int	len_key;

	key = (char*)malloc(100 * sizeof(char));
	if (ft_arg_check(input, key))
	{
	dict = (char*)malloc(10000 * sizeof(char));
	dict_name = (char*)malloc(100 * sizeof(char));
	ft_dtos(dict, dict_name);
	len_key = ft_strlen(key);
	if (len_key > 39)
	{
		write(1, "Dict Error\n", 11);
		return;
	}
	if (key[0] == '0')
		ft_numbers(dict, key, 0);
	else
		ft_get_values(dict, key, len_key);
	write(1, "\n", 1);
	free(dict);
	free(dict_name);
	}
	else
		write(1, "Error\n", 6);
	free(key);
}
