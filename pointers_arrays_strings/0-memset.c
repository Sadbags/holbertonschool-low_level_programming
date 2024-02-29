#include "main.h"

/**
 * _memset - fill a block 
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
