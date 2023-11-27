#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n");
    printf("Modified string: ");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]+1);
    }
    printf("\n");

    return 0;
}
