#include <stdio.h>
/**
* main - function of the task
* Return: Always 0
*/
int main(void)
{
	char low;
	char e = 'e';
	char q = 'q';
	for (low = 'a'; low <= 'z'; low++)

	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);

}
