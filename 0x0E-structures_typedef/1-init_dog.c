#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*init_dog - A Function that initializes a variable of type 'struct dog'
*@d: The variable to initialize
*@name: The name of the dogr
*@age: The age of the dog
*@owner: The owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /*safety check*/
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
