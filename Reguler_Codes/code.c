#include <stdio.h>

void merge(int A[], int low, int mid, int high) {

    int i, j, k;

    i = low;
    j = mid + 1;
    k = low;

    int B[100];

    while (i <= mid && j <= high)
    {
        
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }

        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
 
    }

    if (i > mid)
    {
        while (j <= high && i > mid)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    if (j > high)
    {
        while (i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }

    for ( k = low; k <= high; k++)
    {
        
        A[k] = B[k];

    }
    
    
} 

void merge_sort(int A[], int low, int high){

    int mid;

    if(low < high) {

        mid = (low + high) / 2;
        merge_sort(A, low, mid);
        merge_sort(A, mid+1, high);
        merge(A, low, mid, high);
    }
    

}

int main()
{

  int array[10] = {9, 5, 2,8,4,1,7,6,3,0};

  merge_sort(array, 0, 9);

  for (int i = 0; i < 10; i++)
  {
     printf("%d  ", array[i]); 
  }
  printf("\n");
  
  
  return 0;
}

