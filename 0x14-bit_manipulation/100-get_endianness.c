#include "main.h"
#include <stdint.h>
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int16_t x = 1;

	return (*((int8_t *) &x));
}

