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
int main(int argc, char const *argv[])
{

struct node
{
 int value;
 struct node * ptr;
};
int enqueue(struct node * ptr1, struct node * ptr2){
 /*enqueues ptr2 after ptr1*/
 printf("enqueue...\n");
 ptr1->ptr = ptr2->ptr;
}
int show(struct node * ptra){
 /*shows a particular element of the queue*/
 printf("\n%p\t", ptra);
 printf("[%d\t", ptra->value);
 printf("%p]\n", ptra->ptr);
}
int show_q(struct node * ptra){
 /*shows all the elements of the queue*/
 while(ptra!=NULL){
  show(ptra);
  ptra=ptra->ptr;
 }
}
 struct node a[50];
 a->value=10;
 a->ptr = NULL;
 show(&a);
 struct node b[50];
 b->value=20;
 b->ptr = NULL;
 show(&b);
 enqueue(&a,&b);
 show(&a);
 show(&b);
 show_q(&a);
 return 0;
}
