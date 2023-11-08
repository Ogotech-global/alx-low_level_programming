#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: A pointer to the function to compare values.
 *
 * Return: Index of the first element for which cmp doesn't return 0.
 *         -1 if no element matches or size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	return (-1);

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}

	return (-1);
}

