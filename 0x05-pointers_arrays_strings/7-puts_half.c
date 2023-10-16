#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	length++;

	/* Calculate the starting index for the second half */
	start = (length + 1) / 2;

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	_putchar(str[i]);

	_putchar('\n');
}

