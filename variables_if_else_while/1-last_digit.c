#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* display the last digit of a random number */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n % 10 < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, n % 10);
	}
	return (0);
}
