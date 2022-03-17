
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,t,c=1;
clrscr();
printf("input 20 elements");
for(i=0;i<20;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<20;i++)
{
for(j=i+1;j<20;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<19;i++)
{
if(a[i]==a[i+1])
{
c=c+1;
continue;
}
printf("%d\t%d\n",a[i],c);
c=1;
}
printf("%d\t%d\n",a[i],c);
getch();
}
