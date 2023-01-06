#include "main.h"
/**
 * factorial - function for finding a factorial of a number
 *
 * @n:the value to find its factorial
 *
 * Return:returns the factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * (n - 1));
}
