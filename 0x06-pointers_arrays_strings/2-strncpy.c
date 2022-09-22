#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}


	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
