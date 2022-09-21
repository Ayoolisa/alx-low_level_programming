#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: nunber of bytes from src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
