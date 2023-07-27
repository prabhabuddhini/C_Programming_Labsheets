#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basicsalary, monthlysales, grossRemuneration;
    char city;
    printf("Enter the basic salary:");
    scanf("%f", &basicsalary);
    printf("Enter the monthly sales amount:");
    scanf("%f", &monthlysales);
    printf("Enter the city(K for kurunegala, any other character for other character for other cities):) ");
    scanf("%c", &city);
    float additionalAllowance=0.0;
    if(monthlysales>50000)
    {
        additionalAllowance=basicsalary*0.10;
    }
    if(city=='K')
    {
        additionalAllowance+=2500;
    }
    float bonus=0.0;
    if(monthlysales<=25000)
    {
        bonus=monthlysales*0.10;
    }
    else if(monthlysales>25000&&monthlysales<=50000)
    {
        bonus=monthlysales*0.12;
    }
    else if(monthlysales>50000)
    {
        bonus=monthlysales*0.15;
    }
    grossRemuneration=basicsalary+additionalAllowance+bonus;
    printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
    return 0;
}
