#include <ck_pr.h>
#include <stdlib.h>
#include <unistd.h>

static void
function(const char *string)
{

	ck_pr_load_ptr(&string);
	pause();
	return;
}

static int
f(int x)
{

	if (x == 1) {
		function("a");
	} else if (x == 2) {
		function("b");
	}

	return 0;
}

int
main(int argc, const char *argv[])
{

	return f(atoi(argv[1]));
}
