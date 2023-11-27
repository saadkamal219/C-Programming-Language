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

void addany(int data, int n){

    struct node *newnode, *temp;
    int i;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    if (n==1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;

        for ( i = 1; i <= n; i++)
        {
            temp = temp->next;   
        }
    
        if (temp!=NULL)
        {
        newnode->next = temp->next;
        temp->next = newnode;
        }
    }

    
}

int main(){

    createlist();
    printf("\n");
    display();
    printf("\n");

    int n, data;
    printf("Enter the position where you want to add: ");
    scanf("%d", &n);
    printf("\nEnter data to add at the %dth position: ", n);
    scanf("%d", &data);
    addany(data, n);
    printf("\nData insert done!!!!");
    printf("\nThe linked list: ");
    printf("\n");
    display();
    printf("\n");
}