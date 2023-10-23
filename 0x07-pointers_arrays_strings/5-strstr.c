#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
	return (haystack);

	for (i = 0; haystack[i]; i++)
	{
	if (haystack[i] == needle[0])
	{
	for (j = 0; needle[j]; j++)
	{
		if (needle[j] != haystack[i + j])
		break;
	}
	if (!needle[j])
		return (haystack + i);
	}
	}

	return (NULL);
}

