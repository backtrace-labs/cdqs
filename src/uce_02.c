#include <unistd.h>

static int
function(int vr_a)
{
	int vr_x;
	int vr_y;
	int vr_r;

	if (vr_a == 1) {
		vr_x = 123123;
		vr_r = vr_x;
	} else {
		vr_y = 321321;
		vr_r = vr_y;
	}

	pause();
	return vr_r;
}

int
main(void)
{
	int vr_pr = 789789;

	vr_pr = function(1);
	return vr_pr;
}
