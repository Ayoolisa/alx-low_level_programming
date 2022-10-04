#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: ths size of the data in bytes allocated in the memory
* @c: A character to initialize the array.
*
* Return: a pointer to an array of characters.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(89 * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}


