#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *tail;

void createlist(){

    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
}
