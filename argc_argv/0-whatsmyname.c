#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program name, followes by a new line
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the argument.
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
argc++;
argc--;
printf("%s\n", argv[0]);
return (0);
}
