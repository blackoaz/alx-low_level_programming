#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed by @dest
 *
 * @dest - string that will be appended on.
 *
 * @src: string that will be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
