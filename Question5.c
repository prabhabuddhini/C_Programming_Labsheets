#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, average;

    printf("Enter the first number");
    scanf("%1f", &n1);

    printf("Enter the second mumber");
    scanf("%1f\n", &n2);

    average = (n1+n2); //Calculate the average
    //display the average with decimals
    printf("The average is: %.21f\n", average);
    return 0;
}
