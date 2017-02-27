#include <ck_pr.h>
#include <limits.h>
#include <unistd.h>

int
main(void)
{
	unsigned long vr_index;
	int vr_junk = 0;

	for (vr_index = 0; vr_index < 100; vr_index++)
		ck_pr_inc_int(&vr_junk);

	pause();
	return vr_junk;
}
