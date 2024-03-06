#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array from a list of integers
 * @size: size of the array
 * @c: the array to be created
 *
 * Return: the new array
*/
char *create_array(unsigned int size, char c)
{
char *array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (unsigned int i = 0; i < size; i++)
array[i] = c;
return (array);
}
