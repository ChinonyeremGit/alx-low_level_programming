#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to craete a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: instance of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *yudi;

	yudi = malloc(sizeof(dog_t));
	if (yudi == NULL)
		return (NULL);
	yudi->name = name;
	yudi->age = age;
	yudi->owner = owner;
	return (yudi);
}
