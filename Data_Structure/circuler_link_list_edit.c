#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node *next;

}*head;

void createlist(){

    int i, data;
    struct node *newnode, *temp;

    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter data for the first node: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;

    for ( i = 2; i <= 3; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter data for the new node: ");
        scanf("%d", &data);

        newnode->data = data;
        temp->next = newnode;
        temp = newnode;

    }
    temp->next = head;
    
}

void display(){

    struct node *temp;

    int n = 1;

    temp = head;

    while (temp->next != NULL && n!=7)
    {
        printf("||  %d  ||  - - > >  ", temp->data);
        temp = temp->next;
        n++;
    }
    printf("||  %d  ||  ", temp->data);
    printf("\n\n");
    

}

void insertNth(){

    int i, pos, data;
    struct node *newnode, *temp;

    printf("\nEnter position to add node: ");
    scanf("%d", &pos);
    printf("\nEnter data for the new node: ");
    scanf("%d", &data);

    
    if (pos==1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = head;
        temp = head;
        while (temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        head = newnode;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        temp = head;
        for ( i = 2; i < pos; i++ )
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        
    }
    
}

void deleteNth(){

    struct node *currnode, *prevnode;
    int i, pos;

    printf("\nEnter position to delete node: ");
    scanf("%d", &pos);

    prevnode = NULL;
    currnode = head;

    if (pos==1)
    {
        head = head->next;
        free(currnode);
    }
    else
    {
        for ( i = 2; i < pos; i++)
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
    
    

}

int main(){

    createlist();
    printf("\nThe linked list: \n" );
    printf("\n");
    display();
    printf("\n");

    insertNth();
    printf("\n");
    display();
    printf("\n");

    insertNth();
    printf("\n");
    display();
    printf("\n"); 

    deleteNth();
    printf("\n");
    display();
    printf("\n");

    deleteNth();
    printf("\n");
    display();
    printf("\n");

}