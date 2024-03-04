#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: the string to be printed
*/
void _puts_recursion(char *s)
{
    if (*s == '\0')
        return;
    _puts_recursion(*s);
    _puts_recursion(s + 1);
    _puts_recursion('\n');
    return;
}
