// hello, world
#include <inc/lib.h>

void
umain(int argc, char **argv)
{
		asm volatile("int $1");	// page fault

	// cprintf("hello, world\n");
	// cprintf("i am environment %08x\n", thisenv->env_id);
}
