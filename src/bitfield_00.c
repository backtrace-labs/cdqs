#include <ck_pr.h>
#include <unistd.h>

int
main(void)
{
	struct {
		int apple  : 2;
		int orange : 4;
		int tomato : 5;
	} x;

	x.apple = 1;
	x.orange = 2;
	x.tomato = 3;

	ck_pr_rfo(&x);
	pause();
	return x.apple;
}
