#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * length - get the array's length
 * @c: input (array)
 * Return: length (int)
 */
int length(char *c)
{
	int i;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
 * alloc_Name_and_Owner - allocate size whit malloc
 * @dog: input (dog_t)
 * @len_name: input (length)
 * @len_owner: input (length)
 * Return: void
 */
void alloc_name_and_owner(dog_t *dog, int len_name, int len_owner)
{
	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
		free(dog->name);

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
		free(dog->owner);
}

/**
 * copy_name_and_owner - copy the name and owner to dog
 * @dog: input (dog_t)
 * @name: input (char array)
 * @owner: input (char array)
 */
void copy_name_and_owner(dog_t *dog, char *name, char *owner)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
}

/**
 * new_dog - create a new dog
 * @name: input (dog's name)
 * @age: input (dog's age)
 * @owner: input (dog's owner)
 * Return: pointer (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_name = length(name);
	len_owner = length(owner);
	alloc_name_and_owner(dog, len_name, len_owner);
	if (dog->name == NULL || dog->owner == NULL)
		return (NULL);

	copy_name_and_owner(dog, name, owner);
	dog->age = age;

	return (dog);
}
