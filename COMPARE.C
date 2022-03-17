#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *s1,*s2;
int n,str_search;
clrscr();
printf("enter the first string");
scanf("%s",*s1);
printf("enter the second string");
scanf("%s",*s2);
str_search=strcmp(*s1,*s2);
if(str_search<0)
{
printf("*s1 is less than *s2");
}
else if(str_search>0)
{
printf("*s1 is greater than *s2");
}
else
{
printf("*s1 is equal to *s2");
}
getch();
}