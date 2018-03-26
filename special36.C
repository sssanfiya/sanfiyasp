#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i=0,num=0,alp=0,sp=0,spc=0;
printf("\n enter the string:");
gets(str);
while(str[i]!='\0')
{
char ch=str[i];
if(ch>='0'&&ch<='9')
num++;
else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
alp++;
else if(ch=='\t'&&ch==' ')
sp++;
else
spc++;
i++;
}
printf("\n special characters:%d",spc);
return 0;
}


