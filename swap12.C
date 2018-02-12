#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the two numbers:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n swapped:%d\t %d",a,b);
return 0;
}
