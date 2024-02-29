#include "main.h"

/**
 * _memset - fill a block of memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: number of byte to be set by value
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
}
return s;
}
