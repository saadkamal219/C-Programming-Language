#include <stdio.h>

int main() {
    
    int number;

    printf("Enter the number to check: ");
    scanf("%d", &number);

    if (number%5==0 && number%11==0)
    {
        printf("Divisible\n");
    }
    else
    {
        printf("Not Divisible\n");
    }
    

    return 0;
}