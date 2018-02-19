#include<stdio.h>
int main()
{
int a[10],i,n;
printf("\n enter the values:");
scanf("%d",&a);
printf("\n enter the number of values:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 if(a[i]%2!=0)
 {
 printf("%d",a[i]);
 }
}
return 0;
}
 
