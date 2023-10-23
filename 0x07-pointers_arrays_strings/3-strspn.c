#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segment of s
 * that consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
	match = 0; /* Flag to check if the character is in accept */

	while (*accept)
	{
	if (*s == *accept)
	{
	count++;
	match = 1;
	break;
	}
	accept++;
	}
	if (!match)
	break;

	s++;
	accept = accept - count; /* Reset accept pointer to the start */
	}

	return (count);
}

