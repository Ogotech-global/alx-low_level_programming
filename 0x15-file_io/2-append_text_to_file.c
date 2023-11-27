#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	mode_t permissions = S_IWUSR | S_IRUSR;  /* rw------- */

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND, permissions);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
	write_result = write(file_descriptor, text_content, _strlen(text_content));
	if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}

	close(file_descriptor);
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str && str[len])
	len++;
	return (len);
}

