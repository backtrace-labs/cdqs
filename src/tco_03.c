#include <unistd.h>

static int tco_a(int);

static int
tco_c(void)
{

	pause();
	return 1;
}

static int
tco_b(int r)
{

	if (r > 0)
		return tco_a(1);

	return tco_c();
}

static int
tco_a(int x)
{

	if (x == 3)
		return tco_b(x);

	return tco_c();
}

int
main(void)
{

	return tco_a(3);
}
