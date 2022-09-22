#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to the string to be switched
 *
 * Return: switched characters
 */

char *leet(char *str)
{
	int i = 0, a, j = 5;
	char en[5] = {'A', 'E', 'O', 'T', 'L'};
	char ens[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		a = 0;

		while (a < j)
		{
			if (str[i] == en[a] || str[i] - 32 == en[a])
				str[i] = ens[a];
			a++;
		}
		i++;
	}
	return (str);
}
