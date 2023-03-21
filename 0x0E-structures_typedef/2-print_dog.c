#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_dog - A Function that prints the values of members of struct dog
*
*@d: A pointer to elements of struct dog
*
*Description: If elements of d are NULL print nill
*	if d is null print nothing.
*	(if name is NULL, print Name: (nil))
*
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
