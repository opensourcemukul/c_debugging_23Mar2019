#include <stdlib.h>
struct node
{
	int value;
	struct node *ptr;
};
void show(struct node * ptra);
void show_q(struct node * ptra);
void enqueue(struct node *ptr1,struct node *ptr2);