#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup() - function that returns a pointer to anew string which is a 
 *  duplicate of the string
 *  @*str: string which is a duplicate
 *  Return: returns NULL
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *ret;

	if (!str)
	{
		return (NULL);
	}
	ptr = str;
	while (*ptr++)
		size++;
	ret = malloc(size + 1);
	if (!ret)
	{
		return (NULL);
	}
	ptr = ret;
	while (*str)
	{
		*ptr++ = *str++;
	}
	*ptr = 0;
	return (ret);

}
