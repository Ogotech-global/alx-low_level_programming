#include <stdio.h>
/**
 * main - Print numbers from '0' to '9' putchar
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
