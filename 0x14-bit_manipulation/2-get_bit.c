#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index, starting from 0, of the bit to get.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is within the valid range for the given number of bits */
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	/* Right shift the number to move the desired bit to the rightmost position */
	n >>= index;

	/* Extract the rightmost bit using bitwise AND with 1 */
	return (n & 1);
}

