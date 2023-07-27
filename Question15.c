#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i, count=0;
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++)
    {
        printf("Enter integer %d:", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n The array you entered is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
