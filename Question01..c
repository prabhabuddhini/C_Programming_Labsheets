#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d", &number);
    switch(number%2)
    {
        case 0:
            printf("%d is an even number.\n", number);
            break;
        case 1:
            printf("%d is an odd number.\n", number);
            break;
        default:
            printf("Invalid input.\n");
            break;
    }
    return 0;
}
