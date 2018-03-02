#include<stdio.h>
int main()
{
char s[20];
int n,i;
printf("\n enter the string:");
scanf("%s[^\n]",s);
n=strlen(s);
for(i=0;s[i]!='\0';i++)
{
  if(i==0)
  s(i)=toupper(s(i));
  if(s(i)==' ')
  s(i+1)=toupper(s(i+1));
 }
 printf("\n %s",s);
 return 0;
 }
