#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node {

    int data;
    struct node *next;

}*head;

int count(){

    int countdown = 0;
    struct node *temp;

    temp = head;

    while (temp!=NULL)
    {
       
        temp = temp->next;
         countdown++;
        
    }

    return countdown;
}

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

void deletenode(int n){

    int i;
    struct node *currnode, *prevnode;

    prevnode = NULL;
    currnode = head;

    for ( i = 2; i <= n-1; i++)
    {
        prevnode = currnode;
        currnode = currnode->next;
    }
    
    if (currnode!=NULL)
    {
        if (prevnode!=NULL)
        {
            prevnode->next = currnode->next;
            free(currnode);
        }
        
    }
    

}

void find(){

    int i, n, data;
    struct node *temp;

    temp = head;

    n = count();

    printf("Enter data to find a node: ");
    scanf("%d",&data);
    printf("\n");


    for ( i = 1; i <= n; i++)
    {
        if (temp->data == data)
        {
            printf("\nThe node has been found according to given data\n");
            printf("The given data is at %dth node\n", i);
        }

        temp = temp->next;
        
    }
    

}

void insert(int n){

    int i, data;
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter data to insert at position %d: ", n);
    scanf("%d", &data);

    newnode->data = data;
    newnode->next = NULL;

    temp = head;

    for ( i = 2; i < n; i++)
    {
        temp = temp->next;
    }

    if (temp!=NULL)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    
    
}

int main(){

    int n, data;

    createlist();
    printf("The linked list of nodes: \n");
    printf("\n");
    display();
    printf("\n");

    n = count();

    printf("\nThe number of nodes: %d\n", n);

    printf("\nAfter deleting the node from (n-1)th or %d position: \n", n-1);
    printf("\n");
    deletenode(n);
    display();
    printf("\n");

    find();
    printf("\n");
    
    
    int m;
    printf("Enter that found position: ");
    scanf("%d", &m);
    insert(m);
    printf("\nAfter inserting\n");
    printf("\n");
    display();
    printf("\n");

    



}