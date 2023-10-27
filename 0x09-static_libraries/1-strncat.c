#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of characters from src to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;
	int dest_len = 0;

	/* Find the length of dest */
	while (*ptr_dest)
	{
	dest_len++;
	ptr_dest++;
	}

	/* Append characters from src to dest, up to n characters or until src ends */
	while (*ptr_src && n > 0)
	{
	*ptr_dest = *ptr_src;
	ptr_dest++;
	ptr_src++;
	dest_len++;
	n--;
	}

	/* Null-terminate the resulting string */
	*ptr_dest = '\0';

	return (dest);
}

