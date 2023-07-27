#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum=0;
    printf("Enter number to add(enter-1 to stop:\n");
    while(1)
    {
        scanf("%d", &number);
        if(number==-1)
        {
            break;
        }
        sum+=number;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
