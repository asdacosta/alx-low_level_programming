#include "main.h"

void print_number(int n)
{
	int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
}

