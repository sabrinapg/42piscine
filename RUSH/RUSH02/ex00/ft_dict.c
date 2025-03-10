/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:58:36 by whuth             #+#    #+#             */
/*   Updated: 2025/03/09 15:29:16 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>

void	ft_get_current_dict(char *dict_name)
{
	int	fd;
	int	size;

	fd = open("current_dict.txt", O_RDONLY);
	size = read(fd, dict_name, 100);
	if (size < 1)
	{
		write(1, "Error\n", 6);
		return ;
	}
	dict_name[size] = 0;
	close(fd);
}

void	ft_new_dict(char *dict)
{
	int	fd;

	fd = open("current_dict.txt", O_WRONLY | O_TRUNC);
	write(fd, dict, 1000000);
	close(fd);
}

void	ft_dtos(char *dict, char *dict_name)
{
	int	fd_dict;
	int	size;

	ft_get_current_dict(dict_name);
	fd_dict = open(dict_name, O_RDONLY);
	size = read(fd_dict, dict, 10000000000);
	if (size < 1)
	{
		write(1, "Error\n", 6);
		printf("%d\n", size);
		return ;
	}
	dict[size] = 0;
	close(fd_dict);
}

/*
#include <stdio.h>
int	main(void)
{
	char 	*current_name;
	char	*dict;
	//char	*new_dict_name;

	current_name = (char*)malloc(20 * sizeof(char));
	dict = (char*)malloc(10000 * sizeof(char));
	ft_dtos(dict, current_name);
	printf("%s", dict);
	free(current_name);
	free(dict);
}
//*/
