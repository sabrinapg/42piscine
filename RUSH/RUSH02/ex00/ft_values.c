/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_values.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:30:43 by whuth             #+#    #+#             */
/*   Updated: 2025/03/09 21:01:03 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	extract_value(char *dict, int index)
{
	int	check;

	check = 0;
	while (dict[index] == ' ' || (dict[index] == ':' && !check))
	{
		if (dict[index] == ':')
			++check;
		++index;
	}
	while (dict[index] && dict[index] != '\n')
		write(1, &dict[index++], 1);
}

void	ft_numbers(char *dict, char *key, int index)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i] == key[index] && (i == 0 
				|| dict[i - 1] == '\n') && ft_isspace(dict[i + 1]))
		{
			extract_value(dict, i + 1);
			return ;
		}
		++i;
	}
	write(1, "Dict Error\n", 11);
}

void	ft_two_digit(char *dict, char *key, int index, int is_tens)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if ((is_tens && dict[i] == '1' && dict[i + 1] == key[index + 1]) 
			|| (!is_tens && dict[i] == key[index] && dict[i + 1] == '0')) 
		{
			extract_value(dict, i + 2);
			return ;
		}
		++i;
	}
	write(1, "Dict Error\n", 11);
}

/*
void	ft_tens(char *dict, char *key, int index)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i] == '1' && dict[i + 1] == key[index + 1])
		{
			extract_value(dict, i + 2);
			return ;
		}
		++i;
	}
	write(1, "Dict Error\n", 11);
}

void	ft_ty(char *dict, char *key, int index)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if ((dict[i] == key[index] && dict[i + 1] == '0'))
		{
			extract_value(dict, i + 2);
			return ;
		}
		++i;
	}
	write(1, "Dict Error\n", 11);
}
*/
void	ft_hundred(char *dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i] == '1' && dict[i + 1] == '0' && dict[i + 2] == '0')
		{
			extract_value(dict, i + 3);
			return ;
		}
		++i;
	}
	write(1, "Dict Error\n", 11);
}

void	ft_mil(char *dict, int len_key)
{
	int		i;
	char	mil[37];
	char	*line;

	i = 1;
	mil[0] = '1';
	while (i < len_key)
		mil[i++] = '0';
	mil[i] = 0;
	line = ft_strcmp(dict, mil);
	if (!line)
	{
		return ;
	}
	extract_value(line, 0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dict[] = "1:    one\n10 : ten\n100: hundred\n1000: thousand";
	char	key[] = "1";

	printf("NUMBERS\t\t%s\n", ft_numbers(dict, key, 0));
	//printf("TENS\t\t%s\n", ft_tens(dict, key, 0));
	//printf("TY\t\t%s\n", ft_ty(dict, key, 0));
	//printf("HUNDREDS\t\t%s\n", ft_hundred(dict));
	//printf("MIL\t\t%s\n", ft_mil(dict, 6));
}
//*/
