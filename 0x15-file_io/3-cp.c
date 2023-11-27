#include "main.h"

/**
 * cp_file - Copies the content of a file to another file.
 * @file_from: The source file.
 * @file_to: The destination file.
 * Return: 0 on success, or exit with a specific code on failure.
 */
int cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (!file_from || !file_to)
	{
		dprintf(2, "Usage: %s file_from file_to\n", file_from ? file_to : "unknown");
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
	dprintf(2, "Error: Can't write to %s\n", file_to);
	close(fd_from);
	return (99);
	}
	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	write_result = write(fd_to, buffer, read_result);
	if (write_result != read_result)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		close(fd_to);
		return (99);
	}
	}
	if (read_result == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
	dprintf(2, "Error: Can't close fd %d\n", (fd_from == -1) ? fd_from : fd_to);
	return (100);
	}
	return (0);
}

