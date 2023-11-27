#include <stdio.h>
#include <string.h>

void bubble_sort(int array[], int element){
    int i, j, temp;

    for ( i = 0; i < element; i++ )
    {
        for ( j = 0; j < ( element - i - 1 ); j++ )
        {
            if (array[j] > array[j + 1] )
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(){

    int array[100];
    int num;

    printf("Enter the number of element: ");
    scanf("%d",&num);
    printf("\n");
    printf("Enter %d elements: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    bubble_sort(array, num);

    printf("Positive numbers of the array: ");
    for (int i = 0; i < num; i++)
    {
        if (array[i] > 0)
        {
            printf("%d ", array[i]);
        }

    }
    printf("\n");
    printf("\n");
    printf("Negative numbers of the array: ");
    for (int i = 0; i < num; i++)
    {
        if (array[i] < 0)
        {
            printf("%d ", array[i]);
        }

    }
    printf("\n");

}
