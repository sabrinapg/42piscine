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

#include "strlib.h"
#include <unistd.h>  // For open, read, and write functions
#include <fcntl.h>   // For file control options (O_RDONLY)
#include <stdlib.h>  // For malloc
#include <stdio.h>   // For perror (error printing)

#define MAX_LINE_LENGTH 1024

// Function to look up the English word of a number in the dictionary
void	lookup_number(int number, char *dict_filename)
{
	int fd = open(dict_filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file", 18);
		return ;
	}
	
	char line[MAX_LINE_LENGTH];
	ssize_t bytesRead;
	int found = 0;

	// Read the file line by line and search for the number
	while ((bytesRead = read(fd, line, sizeof(line) - 1)) > 0)
	{
		line[bytesRead] = '\0'; // Null-terminate the buffer

	// Find the first colon which separates the number and word
		char *colon_pos = my_strchr(line, ':');
	
		if (colon_pos != NULL)
		{
			// Null-terminate the number part to extract the number
			*colon_pos = '\0';

			// Convert the number part to an integer
			int file_number = ft_atoi(line);

			if (file_number == number)
			{
				// Print the word associated with the number
				write(1, colon_pos + 2, bytesRead - (colon_pos - line) - 2);
				// Skip ': ' and print word
				write(1, "\n", 1); // Newline after word
				found = 1;
				break ;
			}
		}
	}
	if (!found)
	{
		write(1, "Number not found in dictionary\n", 30);
	}
	close(fd);
}

int main(void)
{
	const char *filename = "numbers.dict";  // The file that contains the number dictionary
	lookup_number(100, filename);
//    lookup_number(15, filename);

	return 0;
}
