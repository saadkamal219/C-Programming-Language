#include <stdio.h>
#include <stdlib.h>

int parttion(int array[], int low, int high){

    int pivot, start, end, temp;

    pivot = array[low];
    start = low;
    end = high;

    do
    {

        while (array[start] <= pivot)
        {
            start++;
        }

        while (array[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            temp = array[start];
            array[start] = array[end];
            array[end] = temp;
        }


    } while (start < end);

    temp = array[low];
    array[low] = array[end];
    array[end] = temp;

    return end;

}

void quick_sort(int array[], int low, int high){

    if (low < high)
    {
        int position = parttion(array, low, high);

        quick_sort(array, low, position-1);
        quick_sort(array, position+1, high);

    }


}

int main(){

    int array[100];
    int num;

    printf("\n Enter the number of elements: ");
    scanf("%d", &num);
    printf("\n");

    printf(" Enter %d elements: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf(" The default array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    quick_sort(array, 0, num-1);

    printf("\n Sorted array by \"Quick Sort Algorithm\": ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");

    return 0;
}
