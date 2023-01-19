#include "function_pointers.h"
/**
 * print_name - function for printing name
 * @name: parameter for name
 * @f: pointer for function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
