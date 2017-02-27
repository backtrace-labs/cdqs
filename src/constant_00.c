#include <unistd.h>

int
main(void)
{
	static unsigned int vr_value = 42;
	unsigned int vr_return = vr_value;

	pause();
	return vr_return;
}
