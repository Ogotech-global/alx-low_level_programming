#include "main.h"

/**
 * display_error - Displays an error message to the standard error.
 * @message: The error message.
 */
void display_error(const char *message)
{
	dprintf(2, "Error: %s\n", message);
}

/**
 * close_files - Closes file descriptors.
 * @fd1: The first file descriptor.
 * @fd2: The second file descriptor.
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1 || close(fd2) == -1)
	display_error("Can't close file descriptor");
}

/**
 * copy_content - Copies content from one file to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * Return: 0 on success, -1 on failure.
 */
int copy_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	write_result = write(fd_to, buffer, read_result);
	if (write_result != read_result)
	{
		display_error("Can't write to file");
		return (-1);
	}
	}

	if (read_result == -1)
	{
	display_error("Can't read from file");
	return (-1);
	}

	return (0);
}

/**
 * cp_file - Copies the content of a file to another file.
 * @file_from: The source file.
 * @file_to: The destination file.
 * Return: 0 on success, or exit with a specific code on failure.
 */
int cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (!file_from || !file_to)
	{
	display_error("Usage: cp file_from file_to");
	return (97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	display_error("Can't read from file");
	return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
	display_error("Can't write to file");
	close(fd_from);
	return (99);
	}

	if (copy_content(fd_from, fd_to) == -1)
	{
	close_files(fd_from, fd_to);
	return (99);
	}

	close_files(fd_from, fd_to);

	return (0);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int result = cp_file("source.txt", "destination.txt");
	
	if (result == 0)
	display_error("File copied successfully");
	else
	display_error("Failed to copy file");

	return 0;
}
