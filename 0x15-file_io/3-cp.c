#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

 /**
 * display_error - Prints an error message to the standard error
 * @message: The error message format
 * @file: The file name (can be NULL)
 */
void display_error(const char *message, const char *file)
{
	if (file != NULL)
	dprintf(2, message, file);
	else
	dprintf(2, "%s", message);
}

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	display_error("Usage: cp file_from file_to\n", NULL);
	return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	display_error("Error: Can't read from file %s\n", argv[1]);
	return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	display_error("Error: Can't write to file %s\n", argv[2]);
	close(fd_from);
	return (99);
	}
	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0 &&
	(write_result = write(fd_to, buffer, read_result)) == read_result)
		;
	if (read_result == -1 || write_result != read_result)
	{
	display_error(read_result == -1 ?
		"Error: Can't read from file %s\n" : "Can't write to file %\n", argv[1]);
	close(fd_from), close(fd_to);
	return (read_result == -1 ? 98 : 99);
	}
	close(fd_from), close(fd_to);
	return (0);
}

