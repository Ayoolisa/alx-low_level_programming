#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @src: source
 * @dest: destination
 * Return: pointer to a resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
