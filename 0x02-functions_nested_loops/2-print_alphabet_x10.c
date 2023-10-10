#include "main.h"
/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int i, j;

	for (i = 0; i < 10; i++)
	{
	ch = 'a';
		for (j = 0; j < 26; j++)
	{
		_putchar(ch);
		ch++;
	}
		_putchar('\n');
	}

}
