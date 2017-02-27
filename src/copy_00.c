#include <unistd.h>

static int
function(unsigned int value)
{

	return value;
}

int
main(void)
{
	unsigned int vr_j = 42;
	unsigned int vr_x = vr_j;
	unsigned int vr_r;

	vr_r = function(vr_x);
	pause();
	return vr_r;
}
