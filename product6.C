#include<stdio.h>
int main()
{
int a,b,p;
printf("\n enter the two number:");
scanf("%d%d",&a,&b);
p=a*b;
if(p%2==0)
{
printf("\n even");
}
else
printf("\n odd");
return 0;
}
