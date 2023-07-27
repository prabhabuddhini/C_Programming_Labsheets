#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter an integer");
    scanf("%d", &number);
    printf("Factors of %d are:\n", number);
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
