#include <stdio.h>
#include <stdlib.h>


int main()
{
    int distance;
    int time;
    float averagespeed;

    printf("Enter the distance traveled in meters:");
    scanf("%d",&distance);
    printf("Enter the time taken in seconds:");
    scanf("%d",&time);
    averagespeed=(float)distance/time;
    printf("The average speed is %3f\m/s\n",averagespeed);

    return 0;
}
