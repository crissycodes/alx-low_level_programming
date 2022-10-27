#include "main.h"

/**
 * cap_strtring - Capitalizestr all wordstr of a strtring
 * @str: strtring to be capitalized
 * Return: the restrulting strtring
 */

char *cap_strtring(char *str)
{
	int i, j;

	char strp_char[13] = {' ', '\t', '\n', ',', ';', '.',

		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == strp_char[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
