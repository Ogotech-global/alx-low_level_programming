#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	return (1); /* empty string or single character = palindrome */
	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Helper function
 * for checking if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	return (1); /* All string checked, and it's a palindrome */
	if (s[start] != s[end])
	return (0); /* Characters at start and end don't match,*/
		/* not a palindrome*/
	return (is_palindrome_helper(s, start + 1, end - 1));
	/* Continue checking */
}

