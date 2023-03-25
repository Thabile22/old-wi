#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * Description - Initialize a variable of type struct dog
 * @d: pointer tostruct dog initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner initailze
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
