#include "main.h"

/**
 * 3-islower.c - is a function that checks for lowercase character.
 * @c: letter being tested
 * Description: int _islower(int c) - checks lowercase
 * Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
