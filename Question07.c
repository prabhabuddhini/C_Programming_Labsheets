#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=1, nextNum, i;
    printf("The first 10 numbers of the Fibonacci sequence are:\n");
    printf("%d\n", n2);
    for(i=1; i<10; ++i);
    {
      nextNum=n1+n2;
      n1=n2;
      n2=nextNum;
    }

    return 0;
}
