#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter the month number(1-12):");
    scanf("%d", &month);
    switch(month)
    {
        case 1:
            printf("January has 31 days.\n");
        case 2:
            printf("February has 28 days.\n");
        case 3:
            printf("March has 31 days.\n");
        case 4:
            printf("April has 30 days.\n");
        case 5:
            printf("May has 31 days.\n");
        case 6:
            printf("June has 30 days.\n");
        case 7:
            printf("July has 31 days.\n");
        case 8:
            printf("August has 31 days.\n");
        case 9:
            printf("September has 30 days.\n");
        case 10:
            printf("October has 31 days.\n");
        case 11:
            printf("November has 30 days.\n");
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number.\n");
            break;
    }
    return 0;
}
