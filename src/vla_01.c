#include <ck_pr.h>
#include <stdlib.h>
#include <unistd.h>

static int
child(int vr_vla_length)
{
	int vr_vla_length_volatile = ck_pr_load_int(&vr_vla_length);
	int vr_vla[vr_vla_length_volatile];
	int vr_i;

	for (vr_i = 0; vr_i < vr_vla_length; vr_i++)
		ck_pr_store_int(&vr_vla[vr_i], vr_i);

	pause();
	return vr_vla[0] + vr_vla[1];
}

int
main(int argc, const char **argv)
{
	int vr_vla_length = atoi(argv[1]);

	return child(vr_vla_length);
}
