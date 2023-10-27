#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (*ptr_dest)
	ptr_dest++;

	while (*ptr_src)
	{
	*ptr_dest = *ptr_src;
	ptr_dest++;
	ptr_src++;
	}

	*ptr_dest = '\0';

	return (dest);
}

