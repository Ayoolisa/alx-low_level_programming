#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @a: number being tested
 * @b: number being tested
 */
void more_numbers(void)
{
	int a, b;

	b = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}


		_putchar('\n');
	}
}
