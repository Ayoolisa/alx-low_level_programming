#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: A pointer to a string of characetrs.
 *
 * Return: A string.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] > 0)
	{
		write(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
