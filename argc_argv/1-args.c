#include <stdio.h>

/**
 * main - main function
 * @argv: command line arguments
 * @argc: command line arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i;
argv++;
argc--;
for (i = 0; i < argc - 1; i++)
{
printf("%dn", i);
return (0);
}
}
