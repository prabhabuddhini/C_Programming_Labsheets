#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, remainder, sum=0;
    printf("Enter a number:");
    scanf("%d", &number);
    while(number>0)
    {
        remainder=number%10;
        sum+=remainder;
        number/=10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
