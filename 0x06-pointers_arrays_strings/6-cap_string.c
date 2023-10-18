#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";
	int capitalize = 1;
/* Flag to indicate if the next character should be capitalized */

	for (i = 0; str[i] != '\0'; i++)
	{
	if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
	str[i] -= ('a' - 'A');

	capitalize = is_separator(separators, str[i]);
	}

	return (str);
}

/**
 * is_separator - Checks if a character is a separator.
 * @separators: The string of separators.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char *separators, char c)
{
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
	if (separators[i] == c)
	return (1);
	}

	return (0);
}

