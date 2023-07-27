#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float n1, n2, result;
    printf("Menu-Driven Calculator");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division");
    printf("4.Multiplication\n");
    printf("Enter your choice(1-4):");
    scanf("%d", &choice);
    printf("Enter the first number:");
    scanf("%f", &n1);
    switch(choice)
    {
        case 1:
            result=n1+n2;
            printf("result:%.2f\n", result);
            break;
        case 2:
            result=n1-n2;
            printf("result:%.2f\n", result);
            break;
        case 3:
            if(n2!=0)
            {
                result=n2/n2;
                printf("result:%.2f\n", result);
            }
            else
            {
                printf("Error:cannot divide by zero.\n");
            }
            break;
        case 4:
            result=n1*n2;
            printf("result:%.2f\n", result);
            break;
        default:
            printf("Error:Invalid choice.\n");
            break;
    }
    return 0;
}
