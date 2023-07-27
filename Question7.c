#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, val;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:"),
    scanf("%d,&n2");
    printf("Before swap:\n");
    printf("First number is %d\n",n1);
    printf("Second number is %d\n",n2);

    val = n1;
    n1 = n2;
    n2 = val;

    printf("After swap:\n");
    printf("First number is %d\n",n1);
    printf("Second number is %d\n",n2);

    return 0;
}
