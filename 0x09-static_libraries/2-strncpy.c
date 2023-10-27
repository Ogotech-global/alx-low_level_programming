#include "main.h"

/**
 * _strncpy - Copies up to n characters from source to destination.
 * @dest: The destination string where content will be copied.
 * @src: The source string from which to copy characters.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

	for (; i < n; i++)
	dest[i] = '\0';

	return (dest);
}

