#include <ck_pr.h>
#include <unistd.h>

static int
factorial(int vr_ac, int vr_n)
{

	if (--vr_n == 1) {
		pause();
		return vr_ac;
	}

	return factorial(vr_ac * vr_n, vr_n);
}

int
main(void)
{
	int vr_value;

	ck_pr_store_int(&vr_value, 3);
	return factorial(vr_value, vr_value);
}
