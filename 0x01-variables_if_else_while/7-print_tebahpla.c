#include <stdio.h>
/**
* main - function of the task
* Return: Always 0
*/
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
