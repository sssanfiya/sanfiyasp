#include<stdio.h>
int main()
{
int n,k,a[10],i,c=0;
printf("\n enter the value and the value to be searched:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i])
}
for(i=0;i<n;i++)
{
 if(a[i]==k)
 {
 c++;
 }
}
printf("\n no of times:%d",c);
return 0;
}
