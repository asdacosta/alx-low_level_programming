#include "main.h"

int main(void)
{
	int n, m;

	n = 612852475143;
	for (m = 1; m <= n; m++)
	{
		if (n % m == 0)
			n /= m;
	}
	printf(%d\n", m);
	return (0);
}

