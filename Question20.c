#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNumber;
    int hoursworked;
    int overtimeHours;
    int overtimePayment;
    int totalEmployee=0;
    int overtimeExceedingcount=0;
    printf("Enter employee number(-999 to end):");
    scanf("%d", &employeeNumber);
    while(employeeNumber != -999)
    {
        printf("Enter hours worked by employee %d:", employeeNumber);
        scanf("%d", &hoursworked);
        overtimeHours = hoursworked - 40;
        overtimePayment = overtimeHours>0 ?(overtimeHours*200)+(40*150) : hoursworked*150;
        printf("Employee Number: %d\n", employeeNumber);
        printf("Overtime Payment: Rs. %d\n",overtimePayment);
        if(overtimePayment>4000)
        {
            overtimeExceedingcount++;
        }
        totalEmployee++;
        printf("\nEnter employee number(-999 to end): ");
        scanf("%d", &employeeNumber);
    }
    float percentageExceeding=(float)overtimeExceedingcount/totalEmployee*100;
    printf("\nPercentage of employee whose overtime payment exceeds Rs. 4000: %.2f%%\n",
    percentageExceeding);
     return 0;
}
