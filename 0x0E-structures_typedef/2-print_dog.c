#include "dog.h"
#include <stdio.h>
/**
 *print_dog - a function that print a struct dog
 *@d: a pointer to the struct
 */
void print_dog(struct dog *d)
{
	/* check if pointer is NULL*/
	if (d == NULL)
	{
		return;
	}
	/*check if elemt of d is NULL*/
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}
