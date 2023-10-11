#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
		return;
}
