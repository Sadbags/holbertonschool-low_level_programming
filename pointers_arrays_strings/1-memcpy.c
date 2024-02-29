#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: final destination
 * @src: memory area
 * @n: memory area
 * Return: returns a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
