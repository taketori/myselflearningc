// ./ch08/02.c

#include <stdio.h>

void ph(void)
{
	printf("/***** OUTPUT *****\n");
}

void pe(void)
{
	printf("\n*/\n");
}

void f(void);

int main(void)
{
	ph();

	#define LIGHTSPEED 186000

	f();

	pe();

	return 0;
}

void f(void)
{
	printf("%ld", LIGHTSPEED);
}

ignore files for git => echo * >>.gitignore
auto-comple
make or shebang for C/CPP
-> add stdout to tail of the source
-> git commit with message
macro to name with first line.

