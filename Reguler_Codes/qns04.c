#include <stdio.h>

int main() {
    
    int v;

    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    int entry[v+1][v+1];

    for (int i = 1; i <= v; i++)
    {

        for (int j = 1; j <= v; j++)
        {
            entry[i][j] = 0;
        }

    }

    int e;

    printf("Enter the number of edges: ");
    scanf("%d", &e);

    int a, b;

    printf("Enter the relationship path between two vertices for the entire graph: ");
    for (int i = 1; i <= e; i++)
    {
        scanf("%d %d", &a, &b);
        entry[a][b] = 1;
    }
    
    printf("\nThe adjacency matrix for given inputs: \n\n");
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            printf("%d  ", entry[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}