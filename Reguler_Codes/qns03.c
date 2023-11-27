#include <stdio.h>
int main() {
    int n;
    int factorial = 1;

    printf("Enter a number to find out the factorial: ");
    scanf("%d", &n);

    if (n < 0){

        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {

        for (int i = 1; i <= n; i++) {

            factorial *= i;

        }

        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
