#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog stats
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL))
		printf("nil\n");
	else
		printf("%s\n", d->name)
	if ((*d).age < 0)
		printf("nil\n");
	else
		printf("%f\n", d->age);
	if ((*d).owner == NULL))
		printf("nil");
	else
		printf("%s\n", d->owner);
}
