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

#include <unistd.h>  // For open, read, and write functions
#include <fcntl.h>   // For file control options (O_RDONLY)
#include <stdlib.h>  // For malloc
#include <stdio.h>   // For perror (error printing)

int main()
{
	const char *filename = "numbers.dict";  // File to read from
	char buffer[256];  // Buffer to store the data
	int fd;  // File descriptor
	ssize_t bytesRead;  // Number of bytes read

	// Open the file in read-only mode (O_RDONLY)
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
        	perror("Error opening file");
        	return (1);
	}
	// Read data from the file into the buffer

	while ((bytesRead = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		// Null-terminate the buffer to ensure it's a valid string
		buffer[bytesRead] = '\0';
		// Write the data to stdout (console)
		write(1, buffer, bytesRead);
	}

	if (bytesRead == -1)
	{
		perror("Error reading file");
		close(fd);
		return (1);
	}
	// Close the file descriptor
	close(fd);
	return (0);
}
