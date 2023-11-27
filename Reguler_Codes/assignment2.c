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

void findnode(int n){

    int i;
    struct node *temp;

    temp = head;
    
    for ( i = 2; i <= n; i++)
    {
        temp = temp->next;
    }

    if (temp!= NULL)
    {
        printf("Node found!!!\n\n");
        printf("Data of the node: %d\n", temp->data);
    }
    
    
}

void deletenode(int n){

    int i;
    struct node *currnode, *prevnode;

    prevnode = NULL;
    currnode = head;

    for ( i = 2; i <= n; i++)
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

void insert(int n){

    int i, data;
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data to add the %dth position to the list: ", n);
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

    int n, data1;

    createlist();
    printf("\nThe linked list: \n");
    printf("\n");
    display();
    printf("\n");

    printf("Enter the node position in the list: ");
    scanf("%d", &n);
    printf("\n");
    findnode(n);
    printf("\n");

    printf("The node has been deleted\n");
    deletenode(n);
    printf("\nThe link list after the deletion program: \n");
    printf("\n");
    display();
    printf("\n");

    printf("\n");
    insert(n);
    printf("\n");
    display();
    printf("\n");


}