#include "main.h"

/**
 * _strspn - write a funtion that gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of character to match in s
 *
 * Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
if (accept[j] == '\0')
return (i);
}
return (i);
}
