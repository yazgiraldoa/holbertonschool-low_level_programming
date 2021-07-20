#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for Poppy
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: struct that describe some characteristics of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/*PROTOTYPES*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
