#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to print.
 * @f: A function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
