#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, errors will exit with status codes (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL || argv[2][1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}

