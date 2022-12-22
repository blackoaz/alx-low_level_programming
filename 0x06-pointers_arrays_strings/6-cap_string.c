#include "main.h"

/**
 *
 *cap_string - function that capitalize first character of a word
 *
 *@str: string to capitalize
 *
 *Return:returns the capitalized string
 *
 */
char *cap_string(char *str)
{
	int i, j;

	char sep[50] = {' ', '\n', '\t', ', ', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] == sep[j])
			{
				if (str[i + 1]) >= 'a' && str[1 + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}

	}
	return (str);
}


