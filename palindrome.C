#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
printf("\n enter the string:");
scanf("%s",a);
b=strrev(a);
if(a==b)
{
printf("\n the string are palindrome");
}
else
{
printf("\n the string is not a palindrome");
}
}
