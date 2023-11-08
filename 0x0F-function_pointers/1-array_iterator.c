#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A function pointer that specifies the action to be performed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

