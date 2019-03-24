/*
I made a simple C program for queues.
There are nodes a and b
b is enqueued after a so that we have a queue [a,b]
a being the front
The problem is that the program
	is not getting compiled
	when I compiled it somehow, it shows Segmentation fault when I run it.
Try to fix the problem.
*/
#include <stdio.h>
#include "Library.h"
int main(int argc, char const *argv[])
{


	struct node a[20];
	a->value=10;
	a->ptr = NULL;
	show(&a[20]);
	struct node b[20];
	b->value=20;
	b->ptr = NULL;
	show(&b[20]);
	enqueue(&a[20],&b[20]);
	show(&a[20]);
	show(&b[20]);
	show_q(&a[20]);
	return 0;
}
