#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	num_coins = 5;
	coin_count = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}

