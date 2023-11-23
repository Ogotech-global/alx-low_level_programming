#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number.
 * @index: The index, starting from 0, of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within the valid range for the given number of bits */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Use bitwise AND with the complement of a 1 shifted to the index */
	*n &= ~(1 << index);

	return (1);
}

