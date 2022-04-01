#include <stdio.h>

/**
 * main - prints number of arguements passed to it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
