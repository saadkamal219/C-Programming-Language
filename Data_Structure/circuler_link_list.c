#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {

    int data;
    struct node *next;

};

int main(){

    struct node *a;
    struct node *b;
    struct node *c;

    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));

    a->data = 0;
    b->data = 1;
    c->data = 2;

    a->next = b;
    b->next = c;
    c->next = a;

    struct node *temp;

    temp = a;
    int n = 1;

    printf("\n");
    printf("\nCirculer link list is a link without a NULL end. The last node is Connected to the first node.\n");
    printf("\n");

    while(temp->next!= NULL && n!=7){
        printf("|| %d ||  -->>  ", temp->data);
        n++;
        temp = temp->next;
    }
    printf("|| %d ||  ", temp->data);

    printf("\n\n");

}
