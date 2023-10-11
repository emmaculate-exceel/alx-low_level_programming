#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print output for dog
 * @d: pointer to the input value
 *
 * Return: Nothing to return
 */

void print_dog(struct dog *d)
{
	/** conditional statement for code */
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		d->name = "Name: (nil)";
	if ((*d).owner == NULL && (*d).age == ' ')
		printf("(nil)");
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
