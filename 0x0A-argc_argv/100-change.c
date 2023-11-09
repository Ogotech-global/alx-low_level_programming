#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 5;
	int coin_count = 0;
    
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

