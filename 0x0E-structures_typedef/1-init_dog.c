#include "dog.h"
#include <stdio.h>
/**
 * init_dog - print dogs name
 * @d: pointer to data
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct *d));

	if (d == NULL)
		return (1);

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	free(d);
}
