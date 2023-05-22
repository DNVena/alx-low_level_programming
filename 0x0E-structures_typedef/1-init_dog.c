#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises struct
 * @d: takes dog struct
 * @name: takes pointer
 * @age: takes float
 * @owner: takes pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
