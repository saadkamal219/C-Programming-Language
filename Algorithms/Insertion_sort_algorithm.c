#include <stdio.h>

void insertion_sort_algorithm(int array[], int elements) {

    int temp, i, j;

    for ( i = 1; i < elements; i++)
    {
        temp = array[i];

        j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j = j - 1;
        }

        array[j+1] = temp;
        
    }

}

int main() {

    int count;

    printf("\n Enter the number of elements: ");
    scanf("%d", &count);

    int array[count];

    printf("\n Enter %d elements: ", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf(" The array by default:            ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    insertion_sort_algorithm(array, count);

    printf("\n Sorted array [ Insertion Sort ]: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n\n");

    return 0;

}