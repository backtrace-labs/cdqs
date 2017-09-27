#include <ck_pr.h>
#include <unistd.h>

int
main(void)
{
	int value;

	struct {
		int apple  : 2;
		int orange : 4;
		int tomato : 5;
	} x;

	ck_pr_store_int(&value, 1);
	x.apple = value;
	x.orange = value;
	x.tomato = value;
	pause();
	ck_pr_rfo(&x);
	return x.apple;
}
