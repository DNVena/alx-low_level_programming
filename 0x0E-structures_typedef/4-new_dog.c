#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - finds the length of a string
 * @s: takes a character pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _copy - copies string
 * @s1: takes pointer
 * @s2: takes pointer
 * Return: pointer
 */
char *_copy(char *s1, char *s2)
{
	int i;
	int len = 0;

	while (s2[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}

/**
 * new_dog - creates a new dog
 * @name: takes pointer
 * @age: takes float
 * @owner: takes pointer
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	_copy(dog->name, name);
	_copy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
