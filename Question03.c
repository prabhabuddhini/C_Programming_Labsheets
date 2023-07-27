#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, factorial=1, no;
    printf("Enter a number for find factorial:");
    scanf("%d", &no);
    for(i=1;i<=no;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d is:%d",no, factorial);
    return 0;
}
