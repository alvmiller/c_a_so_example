#include <stdio.h>
#include <stdlib.h>

#include "foo1.h"
#include "foo2.h"

/*

// https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999
// https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b
// https://cylab.be/blog/234/creating-a-dynamic-library-in-c
// https://medium.com/@johnos3747/shared-libraries-in-c-programming-ab149e80be22
// https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html


gcc -c foo2.c
// ar rcs ...
ar -rc libfoo2.a foo2.o
ar -t libfoo2.a
gcc -c -fPIC foo1.c
gcc -shared -o libfoo1.so foo1.o
// gcc -c main.c
// gcc -o main main.o -I. -L. -lfoo2 -lfoo1
// gcc main.c -I. -L. -lfoo2 -lfoo1 -static -o main
// gcc main.c -I. -L. -lfoo1 -lfoo2 -o main
gcc main.c -L. -lfoo1 -lfoo2 -o main
LD_LIBRARY_PATH=`pwd` ./main

*/

void foo0()
{
	printf("foo-0\n");
}

int main()
{
	foo0();
	foo1();
	foo2();
	return 0;
}
