#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
