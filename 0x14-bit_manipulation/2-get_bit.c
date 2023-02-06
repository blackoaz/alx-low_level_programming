#include "main.h"
/**
 * get_bit - function returning the value of a bit at given index
 * @index: the index of value
 * @n: input
 * Return: returns the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int o;

	if (index > 63)
		return (-1);

	o = 1 << index;
	return ((n & o));
}
