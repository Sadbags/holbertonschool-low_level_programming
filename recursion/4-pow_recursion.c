#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: The power raised
 * @y: The power
 *
 * Return: the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
int total = x;
if (y < 0)
return (-1);
else if (y == 0)
{
return (1);
}
total *= _pow_recursion(x, y - 1);
return (total);
}
