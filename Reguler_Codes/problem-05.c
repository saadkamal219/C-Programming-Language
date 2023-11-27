#include <stdio.h>

void primeOrNot(int number){
    int i, exit = 0;

    for ( i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            printf("\n%d is not a prime number\n", number);
            exit = 1;
            break;
        }
    }
    if (exit == 0)
    {
        printf("\n%d is a prime number\n", number);
    }
}

int main(){

    int number, testcase;

    printf("Test Case = ");
    scanf("%d", &testcase);
    printf("\n");
    printf("Enter numbers: ");
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &number);
        primeOrNot(number);
    }


    return 0;
}
