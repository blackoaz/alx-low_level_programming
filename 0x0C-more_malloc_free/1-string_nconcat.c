#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *string_nconcat  -function that concatenates two strings
 *
 * @s1:first character
 * @s2: second character
 * n: interger n
 */
char *string_nconcat(char *s1, *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 = NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	for (index = 0; s1[i]; i++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < s1[i]; i++)
		concat[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];
	concat[len] = '\0';

	return (concat);

}
