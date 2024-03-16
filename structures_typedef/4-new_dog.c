#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - Create a new dog
 * @name: Name of new dog
 * @age: Age of a new dog
 * @owner: Owner of a new dog
 * Return: Structure of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));
	char *new_name;
	char *new_owner;

	if (ndog == NULL)
		return (NULL);

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ndog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	ndog->name = new_name;
	ndog->age = age;
	ndog->owner = new_owner;
	return (ndog);
}

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: (char) destination
 * @src: (char) text
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Return length of a string
 * @s: (int) text
 * Return: (int) length
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
