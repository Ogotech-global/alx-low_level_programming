#include "main.h"
#include <stdlib.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if it's a space, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
	if (is_space(*str))
	{
	in_word = 0;
	}
	else if (in_word == 0)
	{
	in_word = 1;
	count++;
	}
	str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A dynamically allocated array of words or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}

	int num_words = count_words(str);

	if (num_words == 0)
	{
	return (NULL);
	}

	char **result = (char **)malloc((num_words + 1) * sizeof(char *));

	if (result == NULL)
	{
	return (NULL);
	}

	int i = 0;
	int in_word = 0;
	char *word_start = NULL;

	while (*str)
	{
	if (is_space(*str))
	{
	in_word = 0;
	}
	else if (in_word == 0)
	{
	in_word = 1;
	word_start = str;
	}
	if (in_word && (is_space(*(str + 1)) || *(str + 1) == '\0'))
	{
	int word_length = str - word_start + 1;

	result[i] = (char *)malloc(word_length);

	if (result[i] == NULL)
	{
	return (NULL);
	}
	for (int j = 0; j < word_length; j++)
	{
	result[i][j] = word_start[j];
	}
	result[i][word_length - 1] = '\0';
	i++;
	}
	str++;
	}
	result[i] = NULL;
	return (result);
}

