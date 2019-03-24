#include <stdio.h>
struct node
{
	int value;
	struct node * ptr;
};
void enqueue(struct node * ptr1, struct node * ptr2){
	/*enqueues ptr2 after ptr1*/
	printf("enqueue...\n");
	ptr1->ptr = ptr2->ptr;
}
void show(struct node * ptra){
	/*shows a particular element of the queue*/
	printf("\n%p\t", ptra);
	printf("%d\t", ptra->value);
	printf("%p\n", ptra->ptr);
}
void show_q(struct node * ptra){
	/*shows all the elements of the queue*/
	while((ptra->ptr)!=NULL){
		show(ptra);
		ptra=ptra->ptr;
	}
}
