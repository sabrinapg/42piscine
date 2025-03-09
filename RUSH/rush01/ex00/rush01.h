/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uponci <uponci@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:47:32 by uponci            #+#    #+#             */
/*   Updated: 2025/03/02 16:47:37 by uponci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>

typedef struct puzz {
	int	grid[4][4];
	int	views[4][4];
}	t_Puzzle;

void	fill_views(int values[], int views[4][4], int grid_size);
int		is_valid(t_Puzzle *puzzle, int row, int col, int num);
void	ft_ultimate_grid_size(int *grid_size, int *values);
void	string_to_array(char *str, int arr[], int *count);
void	allocate_views(int views[4][4], char *input);
int		solve(t_Puzzle *puzzle, int row, int col);
void	print_grid(int grid[4][4], int size);
int		validate_input(char *input);
void	create_grid(int grid[4][4]);
void	ft_putnbr(int nb);
int		write_error(void);

#endif
