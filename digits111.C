#include<stdio.h>
int main()
{
int num,count=0;
printf("\n enter the value:");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("\n the output:%d",count);
return 0;
}
