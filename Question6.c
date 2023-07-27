#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[50];
    int byear,age;
    printf("Enter the student name:");
    scanf("%s,&name");
    printf("Enter the student's birth year:");
    scanf("%d",&byear);
    //calculate the age
    age=2023-byear;
    printf("Your name is %s\n",name);
    printf("your age is %d\n",age);
    return 0;

 }
