#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the structure
 * @d: dog_t
 */
void free_dog(dog_t *d)
{
	free(d);
}
