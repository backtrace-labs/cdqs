#include <ck_pr.h>
#include <unistd.h>

int
main(int argc, const char **argv)
{

	ck_pr_load_ptr(argv);
	pause();
	return 0;
}
