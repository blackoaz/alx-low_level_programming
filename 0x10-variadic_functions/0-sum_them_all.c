#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function for summing parts of its parameter
 * @n: the number of arguments
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);


	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, const unsigned int);

	va_end(list);
	return (sum);
}
