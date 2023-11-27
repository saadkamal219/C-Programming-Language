/*
No: 01
Linear Search
Other names: Sequential Search
Recommendation: Sorted or Unsorted
Time complexity: O(n)
*/
int linear_search (int array[], int element, int target) {

    for (int i = 0; i < element; i++) 
    {
        if (array[i] == target)
        {
            return i;
        }
        
    }
    
    return -1;
}

/*
No: 02
Binary Search
Recommendation: Must be sorted according to respective order
Process: Firstly how many elements are there and either the array is sorted or not. Then we have to calculate that how many times we can devide the number
         by 2. Then we have to do logarithm logic to execute the complexity. Such as, an array with 1024 elements. pow(2, 10) is equal to 1024. 
         So, log(2, 1024) is equal to 10. Then the time complexity is O(log(2, 1024)).
Time complexity: O(log(2,n)) 
*/
int binary_search (int array[], int element, int target){
   
   int left, mid, right; // three variable declared as we are to divide the array  

   left = 0; // the very first element of the array is the leftmost element means 0
   right = element - 1; // the very last element of the array is the rightmost element means n - 1, where n is the number of elements
 
   while (left <= right) // the loop will continue untill the left is greater than right
   {
        mid = (left + right) / 2; // defining the middle position

        if (array[mid] == target) // if the taget is equal to the element of the mid position then it will return the position
        {
            return mid;
        }
        else  
        {
            if (array[mid] < target) // if it doesn't, then we will check if the value in the mid position is smaller than the target. If it is, we will update
            {                        // the value of the "left" variable to the next position of the mid position means left = mid + 1. And if it not, we will 
                left = mid + 1;      // update the "right" variable to the previous position of the mid position means right = mid - 1.
            }
            else
            {
                right = mid - 1; 
            }
        }
   }

    return -1; // if we didn't find the target, return -1.

}

/*
No: 03
Selection Sort (Assending)
Recommendation: none
Time complexity: O(n^2)
*/

void assending_selection_sort(int array[], int element){

    int i, j, min, temp; //we declare 4 variables. We name a variable "min", because we have to sort it at assending format.

    for ( i = 0; i < element - 1; i++)
    {
        min = i;

        for ( j = i + 1; j < element; j++)
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

/*
No: 04
Selection Sort (Dessending)
Recommendation: none
Time complexity: O(n^2)
*/

void dessending_selection_sort(int array[], int element){

    int i, j, max = 0, temp; //we declare 4 variables. We name a variable "max", because we have to sort it at dessending format.

    for ( i = 0; i < element - 1; i++)
    {
        max = i;

        for ( j = i + 1; j < element; j++)
        {
            if (array[j] > array[max])
            {
                max = j;
            }
            
        }

        if (max != i)
        {
            temp = array[i];
            array[i] = array[max];
            array[max] = temp;
        }
        
        
    }
    

}

/*
No: 04
Bubble Sort
Recommendation: none
Time complexity: O(n^2)
*/

void bubble_sort(int array[], int element){
    int i, j, temp;

    for ( i = 0; i < element; i++)
    {
        for ( j = 0; j < (element - i - 1); j++ )
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

/*
No: 04
Insertion Sort
Recommendation: none
Time complexity: O(n^2)
*/

void insertion_sort(int array[], int element){

    int i, j, temp;

    for ( i = 1; i < element; i++)
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


/*
No: 05
Merge Sort
Concept: Divide and Conquer
Recommendation: none
Time complexity: O( nlog(2,n) )
*/

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

/*
No: 06
Quick Sort
Other name: Parttion Exchange Sort
Concept: Divide and Conquer
Recommendation: Parttion concept
Time complexity: O( nlog(2,n) )
*/

int parttion(int A[], int low, int high){

    int temp, pivot, start, end;

    pivot = A[low];

    start = low;
    end = high;

    do
    {
        
        while (A[start] <= pivot)
        {
            start++;
        }
        
        while (A[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }

    } while (start < end);

    //Swapping the pivot and the element at end position
    
    temp = A[low];
    A[low] = A[end];
    A[end] = temp;

    return end;

}

void quick_sort(int A[], int low, int high){

    if (low < high)
    {
        int loc = parttion(A, low, high);

        quick_sort(A, low, loc-1);
        quick_sort(A, loc+1, high);

    }
    
} 

/*
No: 07
Coin Change
Concept: Greedy Algorithm
Time complexity: O()
*/

int ans[100];

int findMinCoins(int coins[], int size,  int value)
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        //take as much from coins[i]
        while(value >= coins[i])
        {
            //after taking the coin, reduce the value.
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }

        if(value == 0){
            break;
        }

    }

    return count;
}

int main()
{
    int coins[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int size = 10;

    int amount, i;

    printf("Enter the return amount: ");
    scanf("%d", &amount);

    int MinCount = findMinCoins(coins, size, amount);

    printf("Total Coins Needed = %d\n",MinCount);

    printf("Coins are: ");
    for(i = 0; i < MinCount; i++)
        printf("%d ", ans[i]);

    return 0;
}

/*
No: 08
Fractional Knapsack
Concept: Greedy Algorithm
Time complexity: O()
*/

void display_array(float A[], int elements) {

    for (int i = 0; i < elements; i++)
    {
        printf("%.1f ", A[i]);
    }
    printf("\n");

}

int main(){
    
    int num, capacity, i, j;

    printf("Enter the number of objects: ");
    scanf("%d",&num);

    float weight[num], price[num], ratio[num], profit = 0;
    float tempw, tempp, tempr;

    printf("\nEnter the capacity: ");
    scanf("%d",&capacity);
    
    printf("\nEnter %d objects weight and value: ", num);
    for ( i = 0; i < num; i++)
    {
        scanf("%f %f", &weight[i], &price[i]);
        ratio[i] = price[i] / weight[i];
    }

    for ( i = 1; i < num; i++)
    {
        j = i - 1;

        tempr = ratio[i];
        tempp = price[i];
        tempw = weight[i];

        while (j >= 0 && tempr >= ratio[j])
        {
            ratio[j+1] = ratio[j];
            price[j+1] = price[j];
            weight[j+1] = weight[j];
            j--;
        }

        ratio[j+1] = tempr;
        price[j+1] = tempp;
        weight[j+1] = tempw;

    }

    printf("\nPrice values: ");
    display_array(price, num);

    printf("Weight value: ");
    display_array(weight, num);

    printf("P/W ratio:    ");
    display_array(ratio, num);
    
    i = 0;
    while (capacity > 0)
    {
        printf("\ni: %d\tProfit: %.1f\tCapacity: %d\n", i+1, profit, capacity);

        if (weight[i] <= capacity)
        {
            profit += price[i];
            capacity -= weight[i];
        }
        else
        {
            profit += capacity*ratio[i];
            capacity = 0;
        }
        i++;
        
    }
    
    printf("\nFinal Profit: %.1f\n\n", profit);

    return 0;
}

/*
No: 09
0/1 Knapsack
Concept: Greedy Algorithm
Time complexity: O()
*/

