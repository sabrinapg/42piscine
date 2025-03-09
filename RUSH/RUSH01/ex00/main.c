/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:10:33 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 17:10:38 by uponci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	main(int argc, char *argv[])
{
	t_Puzzle	puzzle;

	if (argc != 2 || !validate_input(argv[1]))
		return (write_error());
	allocate_views(puzzle.views, argv[1]);
	create_grid(puzzle.grid);
	if (solve(&puzzle, 0, 0))
		print_grid(puzzle.grid, 4);
	else
		write_error(); 
	return (0);
}
