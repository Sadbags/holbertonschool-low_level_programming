#include "main.h"
#include <stdlib.h>

/**
 * array_range - create a range array from a range array of integers
 * @min: smallest int in array
 * @max: largest int in array
 *
 * Return: the pointer to the newly created array, NULL if it fails
*/
int *array_range(int min, int max)
{
int i = 0;
int *m;
if (min > max)
return (NULL);
m = malloc(sizeof(int) * (max - min + 1));
if
(m == NULL)
while (min <= max)
m[i++] = min++;
return (m);
}
