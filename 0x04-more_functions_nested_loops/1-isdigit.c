#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: number being tested
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
	{
		return (1);
	}

	return (0);
}
