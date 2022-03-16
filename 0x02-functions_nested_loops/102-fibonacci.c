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
	int t1 = 1;
	int t2 = 2;

	/* initialize the next term (3rd term)*/
	int nextTerm = t1 + t2;

	/* print the first two terms t1 and t2*/
	printf("%d, %d ", t1, t2);

	/* print 3rd to 50th terms*/
	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
