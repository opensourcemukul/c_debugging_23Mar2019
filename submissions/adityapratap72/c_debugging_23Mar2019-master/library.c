#include<stdio.h>
#include <stdlib.h>
#include "library.h"

void enqueue(struct node *ptr1,struct node *ptr2){
    /*enqueues ptr2 after ptr1*/
    printf("enqueue...\n");
    ptr1->ptr = ptr2;
}
void show(struct node * ptra){
    /*shows a particular element of the queue*/
    printf("\n%p\t", ptra);
    printf("%d\t", ptra->value);
    printf("%p\n", ptra->ptr);
}
void show_q(struct node * ptra){
    /*shows all the elements of the queue*/
    while(ptra != NULL){
        show(ptra);
        ptra=ptra->ptr;
    }
}