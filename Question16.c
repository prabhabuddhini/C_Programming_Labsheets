#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int positivecount=0, negativecount=0, zerocount=0;
    int i;
    printf("Enter 10 numbers:\n");
    for(i=0; i<10; i++)
    {
      scanf("%d", &numbers[i]);
      if(numbers[i]>0)
        positivecount++;
      else if(numbers[i]<0)
        negativecount++;
      else
        zerocount++;
    }
    printf("positive numbers: %d\n", positivecount);
    printf("negative numbers: %d\n", negativecount);
    printf("Zero numbers: %d\n", zerocount);

    return 0;
}
