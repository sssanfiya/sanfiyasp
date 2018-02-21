#include<stdio.h>
int main()
{
int n,k,a[10],i,j;
printf("\n enter the no.of values and position of value to be found:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the value in %d position is:%d",k,a[k-1]);
return 0;
}
