#include "main.h"
/**
 * _strpbrk - funtion that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing characters to match
 * Return: string s that matches one of the bytescin accept
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
