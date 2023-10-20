#include "main.h"

/**
 * infinite_add - Adds two numbers as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the result buffer.
 * Return: Pointer to the result, or 0 if result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	len1 = 0;
	while (n1[len1])
	len1++;

	len2 = 0;
	while (n2[len2])
	len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
	return (0);

	carry = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
	sum = carry;

	if (i >= 0)
		sum += n1[i] - '0';
	if (j >= 0)
		sum += n2[j] - '0';

	carry = sum / 10;
	r[size_r - 1] = sum % 10 + '0';
	size_r--;
	}

	while (r[size_r] != 0)
	r[size_r] = 0;

	if (size_r > 0)
	return (r + size_r);
	return (0);
}

