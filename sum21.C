#include<stdio.h>
int main()
{
int n,a[10],i,j,sum=0;
printf("\n enter the number of values:");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
sum=sum+a[j];
}
printf("%d is the output",sum);
return 0;
}
