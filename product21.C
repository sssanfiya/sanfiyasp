#include<stdio.h>
int main()
{
int num,p=1,d;
printf("\n enter the value:");
scanf("%d",&num);
while(num!=10)
{
d=num%10;
p=p*d;
num=num/10;
}
printf("\n %d is the output",p);
return 0;
}
