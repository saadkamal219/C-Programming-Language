// Name: Saad Kamal
// Id: 212-15-14729
// Section: 59-A

#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    
    int num;

    printf("\n  Enter the number of coins: ");
    scanf("%d", &num);

    int coins[num];

    printf("\n  Enter the denominations of %d coins: ", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &coins[i]);
    }
    printf("\n");

    int amount;

    printf("  Enter the amount to pay: ");
    scanf("%d", &amount);

    int solution[1000] = {0};

    for (int i = 0; i <= amount; i++)
    {
        solution[i] = INT_MAX;
    }
    
    solution[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (coins[j] <= i)
            {
                solution[i] = min(solution[i], (1 + solution[i - coins[j]]));
            }
            
        }
        
    }
    
    printf("\n  Minimum number of coins: %d\n\n", solution[amount]);

    return 0;
}