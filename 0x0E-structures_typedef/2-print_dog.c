#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function for printing dog
 * @d: details of the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL))
		printf("\nnil");
	else
		printf("%s", d -> name);
	if ((*d).age == NULL))
		printf("\nnil");
	else
		printf("%f", d ->age);
	if ((*d).owner == NULL))
		printf("\nnil");
	else
		printf("%s", d -> owner);

}
