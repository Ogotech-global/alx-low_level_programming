#include <stdio.h>
/**
 * main - Print alphabet without char and use
 * Return: always (0)
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
