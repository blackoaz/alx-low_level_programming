#include "main.h"
#include <stdio.h>
/**
 * main-reset value to 98
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0 ;
	int *p = &n;
	*p = 98;
	printf("/d\n", n);
	return(0);
	

}
