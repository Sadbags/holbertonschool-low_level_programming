#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of string
 * Return: it returns if the program complies okay
*/
int main(int argc, char *argv[])
{
int m = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
