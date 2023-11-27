// Name: Saad Kamal
// ID: 212-15-14729
// Section: 59-A

#include <stdio.h>
#include <string.h>

int main() {
    
    int n, m, table[100][100];

    char string_A[100] = "abaaba", string_B[100] = "babbab";

    printf("\n   Enter the string elements for string A: ");
    gets(string_A);
    printf("\n");

    printf("   Enter the string elements for string B: ");
    gets(string_B);
    printf("\n");

    m = strlen(string_A);
    n = strlen(string_B);

    for (int i = 0; i <= m; i++)
    {
        table[i][0] = 0;
    }

    for (int i = 0; i <= n; i++)
    {
        table[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (string_A[i] == string_B[j])
            {
                table[i][j] = 1 + table[i-1][j-1];
            }
            else
            {
                if (table[i][j-1] > table[i-1][j])
                {
                    table[i][j] = table[i][j-1];
                }
                else
                {
                    table[i][j] = table[i-1][j];
                }
                
            }
            
        }
        
    }
    
    int index = table[m][n];
    char lcs[index];
    lcs[index] = '\0';

    int i = m;
    int j = n;

    while (i > 0 && j > 0)
    {
        if (string_A[i-1] == string_B[j-1])
        {
            lcs[index - 1] = string_A[i-1];
            i--;
            j--;
            index--; 
        }
        else if (table[i-1][j] > table[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
        
    }

    int length_of_LCS = strlen(lcs);
    
    printf("   Stirng A: %s\n   String B: %s\n", string_A, string_B);
    printf("\n   Length of LCS: %d\n", length_of_LCS);
    printf("   LCS: %s\n\n", lcs);

    return 0;
}