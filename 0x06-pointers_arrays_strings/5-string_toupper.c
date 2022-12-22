#include "main.h"

/**
 * string_toupper - changes all lowercase letters to upper
 *
 * @str: parameter
 *
 * Return: a character
 *
 */

char *string_toupper(char *str)
{
	int index = 0;

	 while (str[index++])
	 {
		 if (str[index] >= 'a' && str[index] <= 'z')
		 {
			 str[index] = str[index] - 32;
		 }
		 i++;
	 }
	 return(str);
}
