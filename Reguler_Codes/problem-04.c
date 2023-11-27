#include <stdio.h>

int main(){

    int number;

    printf("Input a number: ");
    scanf("%d", &number);
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf(" %d x %d  =  %d\n", number, i, (number * i));
    }
}
