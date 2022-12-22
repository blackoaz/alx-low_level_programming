#include "main.h"
/**
 * _strncat - function for concatenating two strings
 * @dest: pointer to destination
 * @src: string to be completed at the end of dest
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
