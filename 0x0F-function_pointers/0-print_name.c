#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: function pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
