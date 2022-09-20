#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string
 *
 * Return: half of the string.
 */

void puts_half(char *str)
{
	int i = 0, len, n;

	while (str[i] != '\0')
	{
		i++;
	}
	n = i;
	len = n / 2;
	while (len <= n)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
