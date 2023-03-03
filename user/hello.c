// hello, world
#include <inc/lib.h>

void
umain(int argc, char **argv)
{

		//cprintf("I read %08x from location 0!\n", *(unsigned*)0);

	//asm volatile("int $14");	// page fault
	cprintf("hello, world\n");
	cprintf("i am environment %08x\n", thisenv->env_id);
}
