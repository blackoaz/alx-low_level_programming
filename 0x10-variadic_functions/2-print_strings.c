#include "variadic_functions.h"
#include <stdargs.h>
#include <stdio.h>
/**
 * print_strings- function for printing strings
 * @separator: string printed between strings
 * @n: number of strings passed to a function
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *sep;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sep = va_args(list, char*);
		if (sep == NULL)
			printf("nil");
		else
			printf("%s", sep);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
