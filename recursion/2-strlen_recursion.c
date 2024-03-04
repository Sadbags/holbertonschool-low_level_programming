#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string to be written
 * Return: the lenght of the string
*/
int _strlen_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
