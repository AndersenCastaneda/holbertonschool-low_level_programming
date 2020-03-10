#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: input (dog's name)
 * @age: input (dog's age)
 * @owner: input (dog's owner)
 * Return: pointer (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
