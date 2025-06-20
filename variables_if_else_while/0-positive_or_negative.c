#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Assign a random number to the variable n each time it is executed.
 * Print whether the number stored is positive, null or negative.
*/

/* is the random number <0,nul or >0 ? */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	if (n == 0)
	{
		printf("%d is 0\n", n);
	}

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
