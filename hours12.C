#include<stdio.h>
int main()
{
int n,thr,min;
printf("\n enter the no.of.mins:");
scanf("%d",&n);
thr=n/60;
min=n%60;
printf("\n %d hours %d mins",thr,min);
return 0;
}
