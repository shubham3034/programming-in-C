#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char sent[100];
int length,choice;
clrscr();
printf("1 get an input string\n");
printf("2 no of the characters\n");
printf("3 string to upper case\n");
printf("4 string to lower case\n");
printf("5 quit\n");
printf("input your choice\n");
scanf("%d",&choice);
switch(choice)
{
case1:
printf("input a sentence");
scanf("%s",sent);
break;
case2:
length=strlen(sent);
printf("%d",length);
break;
case3:
printf("%s",strupr(sent));
break;
case4:
printf("%s",strlwr(sent));
break;
case5:
exit(0);
default:
printf("invalid choice");
break;
}
getch();
}