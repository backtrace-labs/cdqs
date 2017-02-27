static void
function(void)
{

	__asm__ __volatile__("1: jmp 1b");
	return;
}

int
main(void)
{

	function();
	return 0;
}
