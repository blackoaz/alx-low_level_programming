#include "main.h"
/**
 * print_name - function for printing name
 * @name: parameter for name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
	return;
}
