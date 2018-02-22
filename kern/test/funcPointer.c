#include <types.h>
#include <lib.h>
#include <test.h>
#include <funcPointer.h>

int hello0()
{
	kprintf("Hello \n");
	return 0;
}

int goodbye()
{
	kprintf("Goodbye\n");
	return 0;
}
int (*p[2]) ();

int funcPointer(int nargs, char** argv)
{

	int op;
	int result;

	p[0] = hello0;
	p[1] = goodbye;

    kprintf("running operation: ");
   if (nargs>0){
    op = atoi(argv[1]);

  result = (*p[op]) ();
  kprintf("%d", result);}

  return 0;

}
