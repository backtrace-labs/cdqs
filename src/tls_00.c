#include <ck_pr.h>
#include <pthread.h>
#include <unistd.h>

static __thread void *vr_tls;

static void *
a(void *un)
{

	ck_pr_store_ptr(&vr_tls, (void *)1);
	pause();
	return vr_tls;
}

static void *
b(void *un)
{

	ck_pr_store_ptr(&vr_tls, (void *)2);
	pause();
	return vr_tls;
}

int
main(void)
{
	pthread_t pa, pb;

	pthread_create(&pa, NULL, a, NULL);
	pthread_create(&pa, NULL, b, NULL);
	pthread_join(pa, NULL);
	return 0;
}
