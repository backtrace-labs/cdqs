#include <stdlib.h>
#include <unistd.h>

int
main(int argc, const char **argv)
{
	int vr_vla_length = atoi(argv[1]);
	int vr_vla[vr_vla_length];
	int vr_i;

	for (vr_i = 0; vr_i < vr_vla_length; vr_i++) {
		vr_vla[vr_i] = vr_i;
		pause();
	}

	return vr_vla[vr_i / 2];
}
