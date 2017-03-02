#include <ck_pr.h>
#include <unistd.h>

int
main(int argc, const char **argv)
{

	pause();
	ck_pr_load_ptr(argv);
	return 0;
}
