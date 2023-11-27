#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {
    int data;
    struct node *next;
}*head;

void createlist(){

    int i, data;
    struct node *newnode, *temp;

    head = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for the first node: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;

    for ( i = 2; i <= 5; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for the new nodes: ");
        scanf("%d", &data);

        newnode->data = data;
        temp->next = newnode;
        temp = temp->next;

    }
    
    printf("\n");

}

void display(){

    struct node *temp;

    temp = head;

    while (temp!= NULL)
    {
        printf("||  %d  ||  --->>>  ", temp->data);
        temp = temp->next;
    }
    
    printf("NULL\n");
    printf("\n");

}

void addfirst(int data){
    struct node *firstnode;

    firstnode = (struct node *)malloc(sizeof(struct node));

    firstnode->data = data;
    firstnode->next = head;
    head = firstnode;

}

int main(){

    createlist();
    printf("\n");
    display();
    printf("\n");

    int data;
    printf("\nEnter data to add the first of the node: ");
    scanf("%d", &data);
    addfirst(data);
    printf("\n");
    display();
    printf("\n");
    
}