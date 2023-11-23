#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number.
 * @index: The index, starting from 0, of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within the valid range for the given number of bits */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Use bitwise OR to set the bit at the given index to 1 */
	*n |= (1 << index);

	return (1);
}

