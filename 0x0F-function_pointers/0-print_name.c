#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: The function to format the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_name_as_is - Prints a name as is.
 * @name: The name to be printed.
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: The name to be printed.
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
	while (*name != '\0')
	{
		if (*name >= 'a' && *name <= 'z')
			putchar(*name - 32);
		else
			putchar(*name);
		name++;
	}
	putchar('\n');
}

