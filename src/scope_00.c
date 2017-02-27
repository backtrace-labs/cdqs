#include <ck_pr.h>
#include <unistd.h>

int
main(void)
{
	int vr_x;

	ck_pr_store_int(&vr_x, 1);
	for (;;) {
		int vr_x;

		ck_pr_store_int(&vr_x, 2);

		for (;;) {
			int vr_x;

			ck_pr_store_int(&vr_x, 3);
			pause();
		}
	}

	return 0;
}
