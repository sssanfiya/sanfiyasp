#include<stdio.h>
int main()
{
int n,a[10],i,k,temp,j;
printf("\n enter the no.of values and k value:");
scanf("%d%d",&n,&k);
printf("\n enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
         if(a[i]>a[j+1])
        {  
           temp=a[i];
          a[i]=a[j+1];
          a[j]=temp;
         }
    }
  }
  printf("\n %d",a[k]);
  return 0;
}
      
      
