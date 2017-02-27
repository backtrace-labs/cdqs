#include <stdio.h>

int
factorial(int ac, int n)
{

	if (--n == 1)
		return ac;

	return factorial(ac * n, n);
}

int
main(void)
{

	return factorial(3, 3);
}
