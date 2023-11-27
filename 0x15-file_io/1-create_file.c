#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	mode_t permissions = S_IRUSR | S_IWUSR;  /* rw------- */

	if (filename == NULL)
		return (-1);

	/* Open the file with read and write permissions, creating or truncating it */
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
	/* Write text_content to the file */
	write_result = write(file_descriptor, text_content, _strlen(text_content));
	if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}

	/* Close the file descriptor */
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

