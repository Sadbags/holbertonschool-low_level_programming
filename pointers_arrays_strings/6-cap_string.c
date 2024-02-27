#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @n: input string
 *
 * Return: pointer to the modified string
*/
char *cap_string(char *n)
{
int i;
if (n[0] >= 'a' && n[0] <= 'z')
{
n[0] = toupper(n[0]);
}
for (i = 1; n[i] != '\0'; i++)
{
if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' || n[i] == '\r' ||
n[i] == '\f' || n[i] == '\v' || n[i] == ',' || n[i] == ';' ||
n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '\"' ||
n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
{
if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
{
n[i + 1] = toupper(n[i + 1]);
}
}
}
return (n);
