#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head;
void createList(int n);
void deletingnode();
void displayList();

int main()
{
    int n, data,m;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

   // printf("\n\nEnter the data to delete from the list: ");
    //scanf("%d", &data);

    deletingnode();
    printf("\n\n\nData in the list \n");
    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data of node %d: ", i);
            scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
    }
}

void deletingnode()
{
    struct node *prevnode,*currnode;
    prevnode=NULL;
    currnode=head;
    while(currnode->next!=NULL)
    {
        prevnode=currnode;
        currnode=currnode->next;
    }
    if(currnode!=NULL)
    {
        if(prevnode!=NULL)
        {
            prevnode->next=currnode->next;
            free(currnode);
        }
        else
        {
            head=currnode->next;
            free(currnode);
        }
    }
}

void displayList()
{
    struct node *temp;
        temp = head;
        while(temp != NULL)
        {
            printf("[%d]->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
}


