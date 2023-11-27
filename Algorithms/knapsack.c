// Name: Saad Kamal
// ID: 212-15-14729
// Section: 59-A

#include <stdio.h>

void display_array(float A[], int elements) {

    for (int i = 0; i < elements; i++)
    {
        printf("%.1f ", A[i]);
    }
    printf("\n");

}

int main(){
    
    int num, capacity, i, j;

    printf("Enter the number of objects: ");
    scanf("%d",&num);

    float saad[num], kamal[num], ratio[num], profit = 0;
    float temps, tempk, tempr;

    printf("\nEnter the capacity: ");
    scanf("%d",&capacity);
    
    printf("\nEnter %d objects weight and value: ", num);
    for ( i = 0; i < num; i++)
    {
        scanf("%f %f", &saad[i], &kamal[i]);
        ratio[i] = kamal[i] / saad[i];
    }

    for ( i = 1; i < num; i++)
    {
        j = i - 1;

        tempr = ratio[i];
        tempk = kamal[i];
        temps = saad[i];

        while (j >= 0 && tempr >= ratio[j])
        {
            ratio[j+1] = ratio[j];
            kamal[j+1] = kamal[j];
            saad[j+1] = saad[j];
            j--;
        }

        ratio[j+1] = tempr;
        kamal[j+1] = tempk;
        saad[j+1] = temps;

    }

    printf("\nPrice values: ");
    display_array(kamal, num);

    printf("Weight value: ");
    display_array(saad, num);

    printf("P/W ratio:    ");
    display_array(ratio, num);
    
    i = 0;
    while (capacity > 0)
    {
        printf("\ni: %d\tProfit: %.1f\tCapacity: %d\n", i+1, profit, capacity);

        if (saad[i] <= capacity)
        {
            profit += kamal[i];
            capacity -= saad[i];
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
