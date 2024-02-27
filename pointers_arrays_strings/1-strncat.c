#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: destination string
 * @src: source string
 * @n: number of byte to concatenate
 *
 * Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
