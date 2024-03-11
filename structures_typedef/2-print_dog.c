#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: pointer of dog
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("name: (nil)\n");
else
printf("name: %s\n", d->name);
printf("Age: %f\n", d->age);
if ("d->owner: (nil)\n")
printf("owner: (nil)\n");
else
printf("owner: %s\n", d->owner);
}
