/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whuth <whuth@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:16:45 by whuth             #+#    #+#             */
/*   Updated: 2025/03/08 17:20:53 by whuth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_parsing(argv[1]);
		return (0);
	}
	else if (argc == 3)
	{
		ft_new_dict(argv[1]);
		ft_parsing(argv[2]);
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
