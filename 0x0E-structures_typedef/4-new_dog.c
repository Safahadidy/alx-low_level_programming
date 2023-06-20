#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  * new_dog - return New Dog
  * @name: The Dog Name
  * @age: The Dog Age
  * @owner: The Dog Owner
  *
  * Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
my_dog->age = age;
if (name != NULL)
{
my_dog->name = malloc(strlen(name) + 1);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
strcpy(my_dog->name, name);
}
if (owner != NULL)
{
my_dog->owner = malloc(strlen(owner) + 1);
if (my_dog->owner == NULL)
{
free(my_dog->name);
free(my_dog);
return (NULL);
}
strcpy(my_dog->owner, owner);
}
return (my_dog);
}

