#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog description
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
#endif
