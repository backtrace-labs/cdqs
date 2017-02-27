#include <ck_pr.h>

static void
function(unsigned int vr_r)
{
	unsigned int vr_x = vr_r;

	__asm__ __volatile__("1: jmp 1b");
	return;
}

int
main(void)
{
	unsigned int vr_rp;

	ck_pr_store_uint(&vr_rp, 12341234);
	function(vr_rp);
	return 0;
}
