/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:54:15 by dkpg-md-          #+#    #+#             */
/*   Updated: 2025/03/08 15:58:14 by dkpg-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "strlib.h"

#define BUFFER_SIZE 1024

ssize_t	read_line(int fd, char *buffer, size_t size)
{
	ssize_t i = 0;
	char c;
	while (i < size - 1 && read(fd, &c, 1) == 1)
	{
		buffer[i++] = c;
		if (c == '\n')
		break ;
	}
	buffer[i] = '\0';
	return (i);
}

void	lookup_number(int number, const char *dict_filename)
{
	int fd = open(dict_filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 19);
		return ;
	}
	
	char line[BUFFER_SIZE];
	int found = 0;

	while (read_line(fd, line, sizeof(line)) > 0)
	{
		char *colon_pos = my_strchr(line, ':');
		if (colon_pos)
		{
			*colon_pos = '\0';
			if (ft_atoi(line) == number)
			{
				write(1, colon_pos + 2, ft_strlen(colon_pos + 2));
				write(1, "\n", 1);
				found = 1;
				break ;
			}
		}
	}
	if (!found)
	write(1, "Number not found in dictionary\n", 31);
	close(fd);
}

int	main(void)
{
	lookup_number(100, "numbers.dict");
	return (0);
}
