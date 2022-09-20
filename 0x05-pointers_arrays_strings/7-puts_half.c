#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string
 *
 * Return: half of the string.
 */

void puts_half(char *str)
{
	int i = 0;
	int len;
	int half_len;

	while (str[i++])
		len++;

	if ((len % 2) == 0)

		half_len = len / 2;

	else
		half_len = (len + 1) / 2;

	for (i = half_len; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
