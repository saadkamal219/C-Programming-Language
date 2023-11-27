#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {
    char a;
    int f;
    char b;
    float x;
    struct node *next;
};

int main(){

    //part 1

    struct node *head, *mid, *lid, *bid, *tail;

    head = (struct node *)malloc(sizeof(struct node));
    mid = (struct node *)malloc(sizeof(struct node));
    lid = (struct node *)malloc(sizeof(struct node));
    bid = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->a = 'X';
    head->f = 8;
    head->b = 'a';

    mid->a = 'Y';
    mid->f = 9;
    mid->b = 'c';

    lid->a = 'Z';
    lid->f = 6;
    lid->b = 'e';

    bid->a = 'P';
    bid->f = 4;
    bid->b = 'n';

    tail->a = 'Q';
    tail->f = 2;
    tail->b = 'p';

    head->next = mid;
    mid->next = lid;
    lid->next = bid;
    bid->next = tail;
    tail->next = NULL;

    printf("\n");

    while (head!=NULL)
    {
        printf("| %c ", head->a);
        printf("| %d ", head->f);
        printf("| %c |  -->>  ", head->b);

        head = head->next;
    }

    printf("NULL\n");

    printf("\n");
    printf("\n");

    //part 2

    struct node *A, *B, *C, *D;

    A = (struct node *)malloc(sizeof(struct node));
    B = (struct node *)malloc(sizeof(struct node));
    C = (struct node *)malloc(sizeof(struct node));
    D = (struct node *)malloc(sizeof(struct node));

    A->a = 'P';
    A->x = 4.5;

    B->a = 'Q';
    B->x = 6.5;

    C->a = 'R';
    C->x = 8.5;

    D->a = 'S';
    D->x = 2.5;

    D->next = B;
    B->next = C;
    C->next = A;
    A->next = NULL;

    while (D!=NULL)
    {
        printf("| %c ", D->a);
        printf("| %.1f |  -->>  ", D->x);
        D = D->next;
    }

    printf("NULL\n");
    

    
}