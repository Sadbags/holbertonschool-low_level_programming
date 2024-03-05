#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: There number of arguments supplied to the program.
 * @argv: An array of pointers to the argument
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc - 1; i++)
;
printf("%d", i);
return (0);
}
