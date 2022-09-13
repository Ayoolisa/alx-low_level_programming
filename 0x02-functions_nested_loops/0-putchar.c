#include <stdio.h>
#include "main.h"
#include "_putchar.c"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);
}
