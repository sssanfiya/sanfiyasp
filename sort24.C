#include<stdio.h>
int main()
{
int n,a[10],i,j,temp;
printf("\n enter the no.of values:");
scanf("%d",&n);
printf("\n enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
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
printf("\n %d",a[i]);
}
return 0;
}
