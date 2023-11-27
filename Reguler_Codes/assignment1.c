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

void addlast(int data){
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = newnode;

}

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

void deletenode(){

    struct node *currnode, *prevnode;
    int i;

    prevnode = NULL;
    currnode = head;

    for ( i = 2; i <= 3; i++)
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


int main(){

    int data;
    createlist();
    printf("The link list: \n");
    printf("\n");
    display();
    printf("\n");

    printf("Enter data to add at the last of the link list: ");
    scanf("%d",&data);
    printf("\n");
    addlast(data);
    printf("After adding a node at last: \n");
    printf("\n");
    display();
    printf("\n");

    printf("After deleting the mid node: \n");
    deletenode();
    printf("\n");
    display();
    printf("\n");

    int total = count();
    printf("Number of nodes added: %d\n\n", total);

}