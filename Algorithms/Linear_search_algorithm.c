#include <stdio.h>

int linear_search_algorithm(int array[], int element, int target) {

    for (int i = 0; i < element; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
        
    }

    return -1;

}

int main(){
    
    int array[5] = {5, 4, 3, 1, 2};
    int target;

    printf("\nThe array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    printf("\nEnter the target to find out from the array: ");
    scanf("%d", &target);

    int position = linear_search_algorithm(array, 5, target);

    if (position != -1)
    {
        printf("\n%d found at index %d in the array\n\n", target, position);
    }
    else
    {
        printf("\n%d not found at any index in the array\n\n", target);
    }
    
    return 0;
}

