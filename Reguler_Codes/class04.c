#include <stdio.h>
#include <string.h>

int main() {

    int i, j, m, n, LCS_table[20][20];

    char S1[20] = "abaaba", S2[20] = "babbab", b[20][20];

    m = strlen(S1);
    n = strlen(S2);

    for (i = 0; i <= m; i++)
    {
        LCS_table[i][0] = 0;
    }

    for (i = 0; i <= n; i++)
    {
        LCS_table[0][i] = 0;
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++) {

            if (S1[i] == S2[j]) {

                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;

            } 
            else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {

                LCS_table[i][j] = LCS_table[i - 1][j];

            } 
            else {

                LCS_table[i][j] = LCS_table[i][j - 1];

            }

        }
    }

    int index = LCS_table[m][n];
    char lcsAlgo[index];
    lcsAlgo[index] = '\0';

    int x = m, y = n;
    
    while (x > 0 && y > 0) {

        if (S1[x - 1] == S2[y - 1]) {

            lcsAlgo[index - 1] = S1[x - 1];
            x--;
            y--;
            index--;

        }
        else if (LCS_table[x - 1][y] > LCS_table[x][y - 1]) {
        
            x--;

        }
        else {

            y--;
        }

    }

    printf("S1 : %s \nS2 : %s \n", S1, S2);
    printf("LCS: %s", lcsAlgo);

    return 0;
}


