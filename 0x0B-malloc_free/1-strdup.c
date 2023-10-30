#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient
 * memory was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0, i = 0;

	if (str == NULL)
	return (NULL);
	while (str[len] != '\0')
	len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	return (NULL);
	while (i < len)
	{
	duplicate[i] = str[i];
	i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

