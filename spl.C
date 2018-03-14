#include<stdio.h>
#include<string.h>
int main()
{
char c[20];
int n=0,ch=0,b=0,spl=0,i;
printf("\n enter the string:");
gets(a);
while(a[i]!='\0')
{ char c=a[i];
  if(a[i]>=0||a[i]<=9)
  n++;
  else if((a[i]>='a')&&(a[i]<='z') ||(a[i]>='A')&&(a[i]<='Z'))
  ch++;
  else if(a[i]=='\t' && a[i]==' ')
  b++;
  else 
  spl++;
  i++;
 }
 printf("%d",spl);
 return 0;
 }
