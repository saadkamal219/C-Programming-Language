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


int main(){

  createlist();
  printf("\n");
  display();
  printf("\n");

  find();

}