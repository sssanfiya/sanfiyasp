#include<stdio.h>
int main()
{
int a[5],n,i;
printf("\n enter the number of elements:");
scanf("%d",&n);
printf("\n enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n element:%d index:%d",a[i],i);
}
return 0;
}
