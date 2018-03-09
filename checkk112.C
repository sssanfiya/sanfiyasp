#include<stdio.h>
int main()
{
int n,k,i,c=0;
int a[10];
printf("enter the values of n and k:");
scanf("%d%d",&n,&k);
printf("\n enter the values:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(k==a[i])
  {
  printf("\n yes");
  c=1;
  break;
  }
}
if(c==0)
{
printf("\n no");
}
return 0;
}
