#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,sum,diff,prod,choice,a[3][3],b[3][3],i,j;
clrscr();
printf("please enter two numbers");
scanf("%d%d",&num1,&num2);
printf("Menu\n");
printf("1 sum\n");
printf("2 subtraction\n");
printf("3 multiply\n");
printf("4 diplay two matrices\n");
printf("input your choice\n");
scanf("%d",choice);
switch(choice)
{
case1:
sum=num1+num2;
printf("sum=%d\n",sum);
break;
case2:
diff=num1-num2;
printf("subt=%d\n",diff);
break;
case3:
prod=num1*num2;
printf("mult=%d\n",prod);
break;
case4:
printf("enter 9 elements");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter 9 elements for 2 matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",b[i][j]);
}
}
default:
printf("invalid choice");
}
getch();
}

