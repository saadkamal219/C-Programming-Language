#include <stdio.h>

int main() {
    
    int num, capacity;

    printf("\nEnetr the number of iteams: ");
    scanf("%d", &num);

    printf("\nEnter the knapsack capacity: ");
    scanf("%d", &capacity);

    int weight[num + 1], value[num + 1];

    printf("\nEnter weight and value: ");
    for (int i = 1; i <= num; i++)
    {
        scanf("%d %d", &weight[i], &value[i]);
    }
    printf("\n");

    int profit[num + 1][capacity + 1];

    for (int i = 0; i <= num; i++)
    {
        profit[i][0] = 0;
    }
    
    for (int i = 1; i <= capacity; i++)
    {
        profit[0][i] = 0;
    }

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= capacity; j++)
        {
            if (weight[i] > j)
            {
                profit[i][j] = profit[i-1][j];
            }
            else
            {
                if ( ( value[i] + profit[i-1][j-weight[i]] ) > profit[i-1][j] )
                {
                    profit[i][j] = value[i] + profit[i-1][j-weight[i]];
                }
                else
                {
                    profit[i][j] = profit[i-1][j];
                }
                
            }
            
        }
        
    }

    printf("\nFinal profit: %d\n\n", profit[num][capacity]);

    int i = num;
    int j = capacity;

    while (i > 0 && j > 0)
    {
        
        if (profit[i][j] != profit[i-1][j])
        {
            printf("\n%d iteam taken", i);
            j = j - weight[i];
            i--;
        }
        else
        {
            i--;
        }
        
    }
    printf("\n");

    return 0;
}