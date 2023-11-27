#include <stdio.h>

int main(){

    double avg;
    int number;
    int array[100];
    int sum = 0;

    printf("Number of elements: ");
    scanf("%d", &number);
    printf("\n");

    printf("Enter the elements: ");
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (int i = 0; i < number; i++)
    {
        sum += array[i];
    }

    printf("Average: %.2lf\n", avg = (double)sum / number);

}
