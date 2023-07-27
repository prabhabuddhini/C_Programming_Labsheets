#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[20];
    float bs, inc, ns;
    //input employee name, basic salary
    printf("Enter employee name");
    scanf("%s",&empname);
    printf("Enter basic salary");
    scanf("%f",&bs);
    //process(if)
    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    else
        inc=bs*0.05;
    //output employee name with new salary
    ns=bs+inc;
    printf("Employee name %s\n",empname);
    printf("New salary %2f\n",ns);
    return 0;
}
