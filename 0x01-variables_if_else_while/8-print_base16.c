#include <stdio.h>
/**
 * main - numbers of base 16 in lowercase, and new line.
 * Return: Always 0
 */
int main(void)
{
	int numbers = 16;
	int i;

	for (i = 0; i <= numbers; i++)
	{
		if (i >= 0 && i <= 9)
		{
			putchar(i + '0');
			continue;
		}
		if (i >= 10 && i <= 15)
		{
			putchar(i - 10 + 'a');
			continue;
		}
	}
	putchar('\n');
	return (0);
}
