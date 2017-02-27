#include <ck_pr.h>
#include <stdint.h>
#include <sys/types.h>

static void
function(unsigned int vr_switch)
{
	size_t vr_i;
	uint64_t vr_result = 1;

	for (vr_i = 0; vr_i < SIZE_MAX; vr_i++) {
		if (vr_switch == 1) {
			vr_result *= 4;
		} else {
			vr_result *= 2;
		}
	}

	ck_pr_load_64(&vr_result);
	return;
}

int
main(void)
{
	unsigned int vr_a;

	ck_pr_store_uint(&vr_a, 1);
	function(vr_a);
	return 0;
}
