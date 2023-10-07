#include <stdio.h>
/**
 * main - All possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(i + ',');
				putchar(j + ' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
