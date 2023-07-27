#include <stdio.h>
#include <stdlib.h>


int main()
{
    int marks[10];
    int total=0;
    int i;
    //marks
    printf("Enter the 10 marks\n");
    for(i=0;i<10;i++)
    {
        printf("Mark %d:",i+1);
        scanf("%d", &marks[i]);
        total+=marks[i];
    }
    float average=(float)total/10;
    printf("Total marks: %d\n", total);
    printf("Average marks: %d\n", average);
    if(average<50)
    {
        printf("Fail!\n");
    }
    else
    {
        printf("Pass!\n");
    }

    return 0;
}
