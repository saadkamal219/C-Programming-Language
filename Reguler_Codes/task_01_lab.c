#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {
    int a;
    float b;
    char c, s[10];
    struct node *next;
};

int main(){

    struct node *head, *mid, *lid, *bid, *pid,  *tail;

    head = (struct node *)malloc(sizeof(struct node));
    mid = (struct node *)malloc(sizeof(struct node));
    lid = (struct node *)malloc(sizeof(struct node));
    bid = (struct node *)malloc(sizeof(struct node));
    pid = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->a = 1;
    head->b = 7.25;
    head->c = 'S';
    //head->s = strcpy(s, "Saad");

    mid->a = 2;
    mid->b = 7.50;
    mid->c = 'S';
    //mid->s = strcpy(s, "Sakib");

    lid->a = 3;
    lid->b = 7.75;
    lid->c = 'R';
    //lid->s = strcpy(s, "Rakib");

    bid->a = 4;
    bid->b = 8.25;
    bid->c = 'N';
    //bid->s = strcpy(s, "Naim");

    pid->a = 5;
    pid->b = 8.50;
    pid->c = 'P';
    //pid->s = strcpy(s, "Parvej");

    tail->a = 6;
    tail->b = 8.75;
    tail->c = 'A';
    //tail->s = strcpy(s, "Alif");

    head->next = mid;
    mid->next = lid;
    lid->next = bid;
    bid->next = pid;
    pid->next = tail;
    tail->next = NULL;

    while (head!=NULL) 
    {
        printf("| %d ", head->a);
        printf("| %.2f ", head->b);
        printf("| %c | -->>", head->c);
        //printf("| %s | --->>> ", head->s);

        head = head->next;
    }
    
    printf("NULL\n");
}