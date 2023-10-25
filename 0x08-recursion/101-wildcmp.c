#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings with wildcard character '*'.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	/* Both strings have reached the end */
	/* and are considered identical. */
	return (1);
	}

	if (*s2 == '*')
	{
	if (*(s2 + 1) == '*')
	{
	/* Skip duplicate '*'. */
	return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
	{
	/* Skip '*' and continue comparing. */
	return (wildcmp(s1, s2 + 1));
	}

	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}

	/* Mismatch. */
	return (0);
}

