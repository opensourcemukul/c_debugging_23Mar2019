#include <stdio.h>
typedef struct node
{
	int value;
	struct node * ptr;
} node;
int enqueue(node * ptr1, node * ptr2){
	/*enqueues ptr2 after ptr1*/
	printf("enqueue...\n");
	ptr1->ptr = ptr2->ptr;
}
int show(struct node * ptra){
	/*shows a particular element of the queue*/
	printf("\n %p\t", ptra);
	printf("%d \t", ptra->value);
	printf("%p \n", ptra->ptr);
}
int show_q(struct node * ptra){
	/*shows all the elements of the queue*/
	while(ptra->ptr){
		show(ptra);
		ptra=ptra->ptr;
	}
}
