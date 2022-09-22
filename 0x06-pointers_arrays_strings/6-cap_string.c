#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalised.
 *
 * Return: : A pointer to the changed string.
 */
char *cap_string(char *str)
{
	char a[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int j = 0, i;

	while (str[j])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || str[j - 1] == a[i]) && (str[j] >= 97 && str[j] <= 122))
				str[j] = str[j] - 32;
			i++;
		}
		j++;
	}
	return (str);
}
