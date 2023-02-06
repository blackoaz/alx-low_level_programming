#include "main.h"
/**
 * print_binary - function that prints binary representation of a number
 * @n: interger
 * Return:0
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		return (0);
	unsigned long int pow = 1;

	while (pow <= n / 2)
	{
		pow *= 2;
	}
while (pow > 0)
{
	if (n >= pow)
	{
		putchar ('1');

		n -= pow;

	}
	else
	{
		putchar ('0');
	}
	pow /= 2;
}
