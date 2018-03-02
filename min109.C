#include<stdio.h>
int main()
{
int i,j,s,b[10];
printf("\n enter the values:");
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
s=b[0];
for(j=0;j<10;j++)
{
  if(b[j]<s)
  {
  s=b[j];
  }
}
printf("\n %d",s);
return 0;
}
