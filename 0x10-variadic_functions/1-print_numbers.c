#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a newline
 * @separator: string printed between numbers
 * @n: number of intergers passed
 * Return: returns 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		printf("%d", va_arg(list, int));
	if (i != (n - 1) && seperator != NULL)
		printf("%s", seperator);
	printf("\n");
	va_end(list);
}
