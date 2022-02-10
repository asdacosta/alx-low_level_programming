#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char string(void)
	{
		if (last_digit > 5)
			printf("and is greater than 5");
		else if (last_digit == 0)
			printf("and is 0");
		else if (last_digit < 6 && != 0)
			printf("and is less than 6 and not 0");
	}

	printf("Last digit of %d is %d %s", n, last_digit, string());

	return (0);
}

