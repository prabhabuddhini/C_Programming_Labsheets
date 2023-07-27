#include <stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter three integer numbers:\n");
scanf("%d %d %d", &n1,&n2,&n3);
int largest=n1;
int smallest=n1;
if(n2>largest){
largest=n2;
}
if(n3>largest)
{
largest=n3;
}
if(n2<smallest)
{
smallest=n2;
}
if(n3<smallest)
{
smallest=n3;
}
printf("Largest number: %d\n",largest);
printf("Smallest number: %d\n",smallest);
return 0;
}
