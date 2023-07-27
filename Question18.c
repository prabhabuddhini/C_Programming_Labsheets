#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numberOfItems;
    float price, total=0, average;
    printf("Enter the piece of 10 items:\n");
    for(i=1; i<=10; i++)
    {
        printf("item %d:", i);
        scanf("%f", &price);
        total += price;
    }
    numberOfItems=10;
    average=total/numberOfItems;
    printf("\naaverage value of an item: %.2f\n", average);
    return 0;
}
