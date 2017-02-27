#include <ck_pr.h>
#include <stdlib.h>
#include <unistd.h>

static int
child(int vr_vla_length)
{
	int vr_vla[vr_vla_length];
	int vr_i;

	for (vr_i = 0; vr_i < sizeof(vr_vla) / sizeof(*vr_vla); vr_i++)
		vr_vla[vr_i] = ck_pr_load_int(&vr_i);

	pause();
	return ck_pr_load_int(vr_vla);
}

int
main(int argc, const char **argv)
{
	int vr_vla_length = atoi(argv[1]);

	return child(vr_vla_length);
}
