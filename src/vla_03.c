#include <unistd.h>

static int vla_length = 3;

int
main(void)
{
	int vla[vla_length];

	vla[0] = 1;
	pause();
	return vla[0];
}
