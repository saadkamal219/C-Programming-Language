#include <stdio.h>
#include <stdlib.h>

struct node {

    int data; // data
    struct node *next; //link part

}*front = NULL, *rear = NULL;//head and tail part

void enqueue(int data) {

    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    if (front == NULL) 
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    
    printf("\nData insertion successful\n\n");

}

void dequeue(){

    struct node *temp;

    if (front == NULL)
    {
        printf("\nQueue is empty\n\n");
    }
    else
    {
        temp = front;

        front = front->next;

        printf("\nData to be deleted: %d\n\n", temp->data);

        free(temp);

        printf("\nData deletion successful\n\n");
    }
    

}

void display(){

    struct node *temp;
    temp = front;

    if (front == NULL)
    {
        printf("\nQueue is empty\nNothing to display\n");
    }
    else
    {
        while (temp!= NULL)
        {
            printf("||  %d  ||   --->>>   ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");

    }
    
}

int main(){

    int choice, data;

    while(1){

        printf("*********************  Queue list ********************\n\v");
        printf("\nChoice list: \n");
        printf("\n1. Enqueue (Insert)\n\n");
        printf("2. Dequeue (Delete)\n\n");
        printf("3. Display queue list\n\n");
        printf("4. Exit\n\n");

        printf("\nEnter choice: ");
        scanf("%d",&choice);
        printf("\n\n");

        switch (choice)
        {
        case 1:
            printf("\nEnter data to add at the list: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: exit(0); break;
        
        default:printf("\nEnter valid choice values\n\n");
            break;
        }

    }

return 0;    
}