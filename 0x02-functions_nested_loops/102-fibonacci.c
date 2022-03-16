#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	/*initialize first and second terms*/
	long int t1 = 1;
	long int t2 = 2;

	/* initialize the next term (3rd term)*/
	long int nextTerm = t1 + t2;

	/* print the first two terms t1 and t2*/
	printf("%ld, %ld, ", t1, t2);

	/* print 3rd to 50th terms*/
	for (i = 4; i <= 50; ++i)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
