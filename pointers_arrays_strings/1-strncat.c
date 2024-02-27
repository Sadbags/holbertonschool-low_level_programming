#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to
 * @src: source string
 * @n: number of byte print
 *
 * Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j > n)
{
dest[i] != src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
