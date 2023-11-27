#include <stdio.h>

int main() {
    
    int v;

    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    int g[v+1][v+1];

    for (int i = 1; i <= v; i++)
    {

        for (int j = 1; j <= v; j++)
        {
            g[i][j] = 0;
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
        g[a][b] = 1;
        g[b][a] = 1;
    }
    
    printf("\nThe adjacency matrix for given inputs: \n\n");
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            printf("%d  ", g[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int uv;

    printf("Enter the vertex value to print other vertices: ");
    scanf("%d", &uv);

    printf("\nAdjacent vertices of %d: ", uv);
    for (int i = 1; i <= v; i++)
    {
        if (i == uv)
        {
            for (int j = 1; j <= v; j++)
            {
                if (g[i][j] != 0)
                {
                    printf("%d ", j);
                }
                
            }
            printf("\n");
        }

    }

    int u1, u2, mark = 0;

    printf("\nEnter two vertices to check if they are adjacent or not: ");
    scanf("%d %d", &u1, &u2);

    if (g[u1][u2] == 1)
    {
        mark = 1;
    }
    
    if (mark != 0)
    {
        printf("\n%d and %d vertices are adjacent\n\n", u1, u2);
    }
    else
    {
        printf("\n%d and %d vertices are not adjacent\n\n", u1, u2);
    }
    
    
    
    return 0;
}