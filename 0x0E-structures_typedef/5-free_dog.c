#include "dog.h"
#include <stdlib.h>

/**
* free_dog - function that free struct dog
* @d: pointer to the struct dog
* Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
