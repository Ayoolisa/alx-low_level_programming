#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: if b is not equal to 0 or 1 - 0
 * or is b is NULL - 0.
 * Otherwise, the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int len = 0;
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}
		if (b[len - 1] == '1')
		{
			output += base;
		}
		base *= 2;
		len--;
	}
	return (output);
}
