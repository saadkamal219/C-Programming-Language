// Name: Saad Kamal
// ID: 212-15-14729
// Section: 59-A

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;

    printf("\n   Enter the number of elements: ");
    scanf("%d",&n);

    int array[n];

    printf("\n   Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    int Length[n], prev[n];

    for (int i = 0; i < n; i++)
    {
        Length[i] = 1;
        prev[i] = -1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] > array[j] && Length[i] < Length[j] + 1) 
            {
                Length[i] = Length[j] + 1;
                prev[i] = j;
            }

        }
        
    }

    int max = Length[0];
    for (int i = 0; i < n; i++)
    {
        if (max < Length[i])
        {
            max = Length[i];
        }
        
    }

    printf("   Length of LIS = %d\n", max);
    printf("\n   LIS: ");

    max = Length[0];
    int firstPrint = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < Length[i])
        {
            if(!(firstPrint && i))
            {
                printf("%d ", array[i-1]);
                firstPrint = 1;
            }
            max = Length[i];
            while (i < n && Length[i] == Length[i+1])
            {
                i++;
            }
            printf("%d ",array[i]);
        }
        
    }
    printf("\n\n");
    
    return 0;
}