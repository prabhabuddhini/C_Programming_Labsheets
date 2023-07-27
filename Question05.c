#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second;
    printf("Enter the first integer");
    scanf("%d",&first);
    printf("Enter the second integer");
    scanf("%d",&second);
    if(first % second==0)
    {
        printf("%d is a multiple of %d\n",first,second);
    }
    else
    {
        printf("%d is not a multiple of %d\n",first,second);
    }
    return 0;
}
