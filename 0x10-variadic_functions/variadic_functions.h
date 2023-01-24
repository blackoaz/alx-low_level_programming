#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
/**
 * int prototype(int)
 * char prototype(char)
 * void prototype(void)
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTION_H*/
