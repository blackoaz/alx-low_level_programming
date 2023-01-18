#include "dog.h"
/**
 *init_dog - function for initializing variable of type struct dog
 *@d: dog identification
 *@name: name of the dog
 *@age: age of the dog
 *owner:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
