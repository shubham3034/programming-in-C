#include<stdio.h>
#include<conio.h>
void main()
{
int array[10],negative[10],positive[10],i,j,k;
clrscr();
printf("input 10 elements in array");
for(i=0;i<10;i++)
{
scanf("%d",&array[i]);
}
for(i=0,j=0,k=0;i<10;i++)
{
if(array[i]<0)
{
negative[j]=array[i];
j++;
}
else
{
positive[k]=array[i];
k++;
}
}
for(i=0;i<k;i++)
{
printf("%d\t",positive[i]);
}
for(i=0;i<j;i++)
{
printf("%d\t",negative[i]);
}
getch();
}
