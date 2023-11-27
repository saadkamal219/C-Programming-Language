#include <stdio.h>

void selection_sort_algorithm(int array[], int elements) {

    int temp, min;

    for (int i = 0; i < elements; i++)
    {
        min = i;

        for (int j = i+1; j < elements; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            
        }
        
        if (min != i)
        {
            
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;

        }
        

    }
    

}

int main() {
   
    int count;

    printf("\nEnter the number of elements: ");
    scanf("%d", &count);

    int array[count];

    printf("\nEnter %d elements: ", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf("The array by default:            ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    printf("Sorted array [ Selection Sort ]: ");
    selection_sort_algorithm(array, count);
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n\n");

    return 0;
}