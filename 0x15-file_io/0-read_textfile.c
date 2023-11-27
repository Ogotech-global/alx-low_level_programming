#include "main.h"

/**
 * read_textfile - Reads and print a text file to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_chars, write_chars;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	/* Read from the file */
	read_chars = read(file_descriptor, buffer, letters);
	if (read_chars == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	/* Write to standard output */
	write_chars = write(STDOUT_FILENO, buffer, read_chars);
	if (write_chars == -1 || write_chars != read_chars)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	/* Clean up and return the actual number of letters read and printed */
	free(buffer);
	close(file_descriptor);
	return (read_chars);
}

