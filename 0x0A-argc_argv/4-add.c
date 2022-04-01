#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - add two positive numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc < 2)
		{
			printf("0\n");
			break;
		}
		else if (atoi(argv[i]) < 48 || atoi(argv[i]) > 57)
		{
			printf("Error\n");
			return (1);
			break;
		}
		else
		{
			sum += atoi(argv[1]) + atoi(argv[2]);
		}
	}
	printf("%d\n", sum);
