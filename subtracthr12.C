#include<stdio.h>
int main()
{
int a[3];b[3],i,j;
printf("enter the first time:");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the second time:");
for(j=0;j<3;j++)
{
scanf("%d",b[j]);
}
c[1]=a[1]-b[1];
c[2]=a[2]-b[2];
printf("the subtrated time:%d %d",c[1],c[2]);
return 0;
}
