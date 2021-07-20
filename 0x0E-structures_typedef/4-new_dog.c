#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* new_dog - function that creates a new dog
* @name: new dog's name
* @age: new dog's age
* @owner: new dog's owner
* Return: nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (j = 0; owner[j]; j++)
		newdog->owner[j] = owner[j];
	newdog->owner[j] = '\0';

	return (newdog);
}
