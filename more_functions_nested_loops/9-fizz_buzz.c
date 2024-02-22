#include "main.h"
/**
 * fizz_buzz - prints the numbers from 1 to 100,
 * but for multiples of 3, print Fizz
 * instead of the number, and for the multiples of 5, print Buzz
 * instead of the number, and for multiples of both 3 and 5, print FizzBuzz
 * Return: void
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
}
