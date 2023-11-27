#include <stdio.h>

int linear_search(int array[], int element, int target){
    int i;

    for ( i = 0; i < element; i++ )
    {
        if (array[i] == target)
        {
            return i;
            break;
        }

    }
    return 0;
}

int main(){

    int testcase, number, target, position;

    int array[100];

    printf("Total case: ");
    scanf("%d", &testcase);
    printf("\n");
    printf("How many Numbers you want to insert: ");
    scanf("%d", &number);
    printf("\n");
    printf("Enter %d array elements: ", number);
    for (int i = 0; i < number; i++ )
    {
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int j = 0; j < testcase; j++ )
    {
        printf("Case: %d\n", j+1);
        printf("Enter data you want to search: ");
        scanf("%d", &target);

        position = linear_search(array, number, target);

        if (position != 0)
        {
            printf("\n%d found at index %d\n", target, position);
        }
        else
        {
            printf("\n%d not found in the array\n", target);
        }
    printf("\n");
    }
    return 0;
}
