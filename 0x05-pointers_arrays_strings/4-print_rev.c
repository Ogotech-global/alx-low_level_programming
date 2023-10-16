#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (s[length] != '\0')
	length++;

	/* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	_putchar(s[i]);

	_putchar('\n');
}

