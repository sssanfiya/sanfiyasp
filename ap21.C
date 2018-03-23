#include<stdio.h>
int main()
{
int a,d,n,i,sum=0;
printf("\n enter the no of elements:");
scanf("%d",&n);
printf("\n enter the starting element:");
scanf("%d",&a);
printf("\n enterthe difference:");
scanf("%d",&d);
for(i=0;i<n;i++)
{
sum=sum+a;
a=a+d;
}
printf("\n the ap is:%d",sum);
}
