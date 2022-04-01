#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 1 || argc == 2)
		printf("Error\n");
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
