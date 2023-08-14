#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
