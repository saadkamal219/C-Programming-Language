#include <stdio.h>

void maximum_in_array(int a[], int n){

    int i;
    int max = 0;

    for ( i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }

    }

    printf("Largest element in array: %d", max);

}

void minimum_in_array(int a[], int n){

    int i;
    int min;

    for ( i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i];
        }

    }

    printf("Smallest element in array: %d", min);

}

int main(){

    int array[10];

    printf("Enter data for array: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    maximum_in_array(array, 10);
    printf("\n");
    printf("\n");
    minimum_in_array(array, 10);
    printf("\n");

    return 0;
}
