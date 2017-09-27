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
	} x = { 1, 1, 1 };

	pause();
	return x.apple + x.orange + x.tomato;
}
