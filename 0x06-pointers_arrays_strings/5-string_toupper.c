#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @str: The string to convert.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr -= ('a' - 'A');
	ptr++;
	}

	return (str);
}

