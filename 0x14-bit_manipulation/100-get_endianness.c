#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check = 1;

	/* Use pointer to examine the first byte in memory */
	char *ptr = (char *)&check;

	/* If the first byte is non-zero, system is little-endian */
	return (*ptr);
}

