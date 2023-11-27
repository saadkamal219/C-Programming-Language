#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {

    int data;
    struct node *next;
    struct node *prev;

};

int main(){

    struct node *a;
    struct node *b;
    struct node *c;

    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));

    a->data = 1;
    b->data = 2;
    c->data = 3;

    a->next = b;
    b->next = c;
    c->next = NULL;

    c->prev = b;
    b->prev = a;
    a->prev = NULL;

    struct node *temp, *temp1;

    temp = a;
    temp1 = c;

    printf("\n");

    while (temp!=NULL)
    {
        printf("|| %d ||  -->>  ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    printf("\n");
    printf("Doubly link list has a reverse connection refferd as prev link as like as next link\n");
    printf("\n");

    while (temp1!=NULL)
    {
        printf("|| %d ||  -->>  ", temp1->data);
        temp1 = temp1->prev;
    }
    printf("NULL\n");

    printf("\n");

return 0;    
}
