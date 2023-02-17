#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the last digit stored in th variable n
* Return: Always 0 (success)
*/

int main(void)
{
	int n, lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	if (lastD > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastD);
	}
	else if (lastD < 6 && lastD != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastD);
	}
	else if (lastD == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, lastD);
	}
	return (0);
}
