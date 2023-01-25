#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function for printing anything
 * @format: different formats to be printed
 * Returns:0
 */
void print_all(const char * const format, ...)
{
	va_list list;

	va_start(list, format);

	int i;

	while (format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_args(list, int));
		else if (format[i] == 'i')
			printf("%i", va_args(list, int));
		else if (format[i] == 'f')
			printf("%f", va_args(list, double));
		else if (format[i] == 's')
		{
			char *s = va_args(list, char*);

			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
		}
	}
	i++;
	printf("\n");
	va_end(list);
}
