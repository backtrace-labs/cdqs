#include <string.h>
#include <unistd.h>
#include <sys/types.h>

static unsigned int
count(char *buffer, size_t n)
{
	unsigned int vr_sum = 0;
	size_t vr_i;

	for (vr_i = 0; vr_i < n; vr_i++)
		vr_sum += buffer[vr_i] == 'w';

	pause();
	return vr_sum;
}

int
main(void)
{
	char word[] = "what where how why";
	return (int)count(word, strlen(word));
}
