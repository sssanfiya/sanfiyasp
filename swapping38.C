#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the values:");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n the values after swapping:%d   %d",a,b);
return 0;
}
