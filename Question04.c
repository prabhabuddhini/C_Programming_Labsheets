#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, diameter, circumference, area;
    //Enter the radius from the user
    printf("Enter the radius of the circle");
    scanf("%f",&radius);
    //calculate the diameter, circumference and area diameter=2*radius;
    circumference=2*PI*radius;
    area=PI*radius*radius;
    //print the results
    printf("diameter:%.2f\n",diameter);
    printf("circumference:%.2f\n",circumference);
    printf("area:%.2f\n",area);
    return 0;
}
