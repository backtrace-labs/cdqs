#include <ck_pr.h>
#include <unistd.h>

#define VR_MACRO	31337

int
main(void)
{
	int x;

	ck_pr_store_int(&x, VR_MACRO);
	pause();
	return x;
}
