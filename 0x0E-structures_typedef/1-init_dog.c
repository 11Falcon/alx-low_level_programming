#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - entry code
 * @dog: structure
 * @name: char
 * @age: float
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
