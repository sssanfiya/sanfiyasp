#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the number:");
scanf("%d",&a);
printf("\n enter the interval:");
scanf("%d%d",&b,&c);
if(a>b&&a<c)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
