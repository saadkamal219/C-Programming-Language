#include <stdio.h>

void bubble_sort(int array[], int elements) {

    int temp;

    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < (elements - 1 - i); j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

int main(){
    
    int count;

    printf("\n  Enter the number of elements: ");
    scanf("%d", &count);

    int array[count];

    printf("\n  Enter %d elements: ", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf("\n  The array by default:         ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    bubble_sort(array, count);

    printf("\n  Sorted array [ Bubble Sort ]: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n\n");

    return 0;
}