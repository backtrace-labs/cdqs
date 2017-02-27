#include <ck_pr.h>
#include <limits.h>
#include <stdint.h>

int
main(void)
{
	uint64_t limit;
	uint64_t vr_index;
	uint64_t vr_ac = 0;

	ck_pr_store_64(&limit, UINT64_MAX);
	for (vr_index = 0; vr_index < limit; vr_index++)
		ck_pr_store_64(&vr_ac, vr_index);

	return vr_ac;
}
