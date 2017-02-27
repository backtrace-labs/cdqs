#include <unistd.h>

static int
tco_c(void)
{

	pause();
	return 1;
}

static int
tco_b(void)
{

	return tco_c();
}

static int
tco_a(void)
{

	return tco_b();
}

int
main(void)
{

	return tco_a();
}
