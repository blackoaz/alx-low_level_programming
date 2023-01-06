#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse order.
 *
 * @s:string to be printed in reverse
 * Returns:returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') return;
	else
	{
		_putchar(*s);
		_print_re_recursion(s + 1);
	}
}
