#include <stdio.h>

int binary_search_algorithm(int array[], int element, int target) {

    int left = 0;
    int right = element - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (array[mid] == target)
        {
            return mid;
        }
        else
        {
            if (array[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
            
        }
        
    }
    
    return -1;

}

int main(){
    
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

    printf("\nThe array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    printf("\nEnter the target: ");
    int target;
    scanf("%d", &target);

    int position = binary_search_algorithm(array, count, target);

    if (position != -1)
    {
        printf("\n%d found at index %d\n\n", target, position);
    }
    else
    {
        printf("\n%d not found at any index\n\n", target);
    }
    

    return 0;
}