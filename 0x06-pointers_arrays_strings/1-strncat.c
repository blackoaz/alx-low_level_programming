#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be appended on
 * @src: string to be appended to dest
 * @n: interger parameter to compare index to
 *
 * Return : returns a new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
