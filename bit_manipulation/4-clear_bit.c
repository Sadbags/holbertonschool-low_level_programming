#include <stdio.h>

/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit needs to be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= sizeof(unsigned long int) * 8 || n == NULL)
return (-1);

*n &= ~mask;

return (1);
}
