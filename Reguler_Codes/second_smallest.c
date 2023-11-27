#include <stdio.h>
#include <limits.h>

int secSmallest(int arr[], int n)
{
    // assigning first element as smallest temporarily
    int smallest = arr[0];
    
    // we find the smallest element here
    for (int i=0; i < n; i++){
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    
    // temporarily assinging largest max value
    int sec_smallest = INT_MAX;
    
    // finding second smallest here
    for (int i=0; i < n; i++){
        if(arr[i] != smallest && arr[i] < sec_smallest)
            sec_smallest = arr[i];
    }

    return sec_smallest;
    
}
int main()
{
    int arr[] = {70, 40, 30, 20, 10, 90};
    
    // get the length of the array
    int len = sizeof(arr)/sizeof(arr[0]);    
    
    printf("The 2nd smallest : %d",secSmallest(arr, len));
}

// find the string lenghth
// #include <stdio.h>
// int main() {
//     char s[] = "Programming is fun";
//     int i;

//     for (i = 0; s[i] != '\0'; ++i);
    
//     printf("Length of the string: %d", i);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//   char s1[100] = "programming ", s2[] = "is awesome";
//   int length, j;

//   // store length of s1 in the length variable
//   length = 0;
//   while (s1[length] != '\0') {
//     ++length;
//   }

//   // concatenate s2 to s1
//   for (j = 0; s2[j] != '\0'; ++j, ++length) {+
//     s1[length] = s2[j];
//   }

//   // terminating the s1 string
//   s1[length] = '\0';

//   printf("After concatenation: ");
//   puts(s1);

//   return 0;
// }