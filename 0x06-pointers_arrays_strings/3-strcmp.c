#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: arg char
 * s2: arg char
 *
 * Return: string to standout
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; si[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i])
		}
	}
	return(0);
}