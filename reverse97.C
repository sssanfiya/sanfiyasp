#include<stdio.h>
int main()
{
int a,r=0;
printf("\n enter the value:");
scanf("%d",&a);
while(r!=0)
{
r=r*10;
r=r+a%10;
a=a/10;
}
printf("%d",r);
return 0;
}
