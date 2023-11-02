#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: Pointer to a newly allocated space in memory containing the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;
	if (n >= len2)
	n = len2;
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
	new_str[i] = s2[j];
	new_str[i] = '\0';

	return (new_str);
}

