#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	length++;

	start = 0;
	end = length - 1;

	/* Swap characters from start and end until middle is reached */
	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}

