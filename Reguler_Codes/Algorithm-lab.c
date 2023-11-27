//Weight = saad
//Price = kamal

#include <stdio.h>

void display_array(float A[], int elements) {

    for (int i = 0; i < elements; i++)
    {
        printf("%.1f  ", A[i]);
    }
    printf("\n");

}

int main(){
    
    int num, capacity, i, j;

    printf("Enter the number of objects: ");
    scanf("%d",&num);

    float weight[num], price[num], ratio[num], profit = 0;
    float tempw, tempp, tempr;

    printf("\nEnter the capacity: ");
    scanf("%d",&capacity);
    
    printf("\nEnter %d objects weight and value: ", num);
    for ( i = 0; i < num; i++)
    {
        scanf("%f %f", &weight[i], &price[i]);
        ratio[i] = price[i] / weight[i];
    }

    for ( i = 1; i < num; i++)
    {
        j = i - 1;

        tempr = ratio[i];
        tempp = price[i];
        tempw = weight[i];

        while (j >= 0 && tempr >= ratio[j])
        {
            ratio[j+1] = ratio[j];
            price[j+1] = price[j];
            weight[j+1] = weight[j];
            j--;
        }

        ratio[j+1] = tempr;
        price[j+1] = tempp;
        weight[j+1] = tempw;

    }

    printf("\nPrice values: ");
    display_array(price, num);

    printf("Weight value: ");
    display_array(weight, num);

    printf("P/W ratio:    ");
    display_array(ratio, num);
    
    i = 0;
    while (capacity > 0)
    {
        printf("\ni: %d\tProfit: %.1f\tCapacity: %d\n", i+1, profit, capacity);

        if (weight[i] <= capacity)
        {
            profit += price[i];
            capacity -= weight[i];
        }
        else
        { 
            profit += capacity*ratio[i];
            capacity = 0;
        }
        i++;
        
    }
    
    printf("\nFinal Profit: %.1f\n\n", profit);

    return 0;
}
