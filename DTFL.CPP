#include<stdio.h>
#include<conio.h>
#include<stddef.h>
void main()
{clrscr();
printf("SHUBHAM\n");
printf("Date:%s\n",__DATE__);
printf("Time:%s\n",__TIME__);
printf("File:%s\n",__FILE__);
printf("Line:%d\n",__LINE__);
getch();
}