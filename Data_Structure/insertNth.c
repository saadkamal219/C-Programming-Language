#include <stdio.h>
#include <stdlib.h>



struct node {
    int data; 
    struct node *next; 
}*head;



void createList(int n);
void insertNodeAtNth(int data, int position);
void displayList();



int main()
{
    int n, data, position;

    /*
     * Creates a  linked list of n nodes
     */
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    /*
     * Inserts data at middle of the singly linked list
     */
    printf("\nEnter data to insert at middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert new node: " );
    scanf("%d", &position);
    insertNodeAtNth(data, position);

    printf("\nData in the list \n");
    displayList();

    return 0;
}
/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    /*
     * If unable to allocate memory for head node
     */
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * Reads data of node from the user
         */
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; //Links the data field with data
        head->next = NULL; //Links the address field to NULL
        temp = head;
        /*
         * Creates n nodes and adds to linked list
         */

        for(i=2; i<=n; i++)
        {
        newNode = (struct node *)malloc(sizeof(struct node));
            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; //Links the data field of newNode with data
                newNode->next = NULL; //Links the address field of newNode with NULL
                temp->next = newNode; //Links previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("LINKED LIST CREATED SUCCESSFULLY\n");
    }
}
/*
 * Creates a new node and inserts at middle of the linked list.
 */
void insertNodeAtNth(int data, int position)//26,3
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; //Links the data part
        newNode->next = NULL;

        temp = head;

       
        for(i=2; i<position; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Links the address part of new node */
            newNode->next = temp->next;

            /* Links the address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}



/*
 * Displays the entire list
 */
void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d->", temp->data); //Prints the data of current node
            temp = temp->next; //Advances the position of current node
        }
         printf("NULL");
    }
}

