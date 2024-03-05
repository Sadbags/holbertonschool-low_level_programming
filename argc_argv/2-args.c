#include <stdio.h>

/**
 * main - funtion
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: number of arguments
*/
int main(int argc, char *argv[])
{
int i;
printf("%s\n", argv[0]);

for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
