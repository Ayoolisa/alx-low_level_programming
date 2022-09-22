#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
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
