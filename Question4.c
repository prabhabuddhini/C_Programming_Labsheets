#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, total;

    printf("Enter the first integer:");
    scanf("%d", &n1);

    printf("Enter the second integer:");
    scanf("%d", &n2);

    total = n1+n2;

    printf("The total is: %d\n", total);
    return 0;
}
