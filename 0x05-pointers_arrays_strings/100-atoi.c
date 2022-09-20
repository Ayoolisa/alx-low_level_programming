#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int i, a, b, c;

	i = b = 0;
	c = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			c *= -1;
		i++;
	}
	a = i;
	while ((*(s + a) >= '0') && (*(s + a) <= '9'))
	{
		b = b * 10 + c * (*(s + a) - '0');
		a++;
	}
	return (b);
}


