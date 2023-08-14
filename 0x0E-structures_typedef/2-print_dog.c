#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Entry code
 * @d: structure
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s",d->name,d->age,d->owner);
}
