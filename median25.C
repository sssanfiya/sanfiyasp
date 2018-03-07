#include<stdio.h>
int main()
{
int n,d,i,j,temp,a[10];
printf("\n enter the value of n:");
scanf("%d",&n);
printf("\n enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
d=n/2;
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }
}
printf("\n %d",a[d]);
return 0;
}
