#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, reversednumber=0, remainder;
    printf("Enter a number:");
    scanf("%d", &number);
    do
    {
        remainder=number%10;
        reversednumber=reversednumber*10+remainder;
    }
    while(number!=0);
    printf("Reversed number: %d\n", reversednumber);
    return 0;
}
