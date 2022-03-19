#include<stdio.h>

int main()
{
    int i,num;
    int max1,max2;
    printf("SHUBHAM\n");
    printf("enter the number=");
    scanf("%d",&num);

    max1 = max2 = num;
    while(num != -1)
    {
        if(num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if(num > max2 && num < max1)
        {
            max2 = num;
        }
        scanf("%d",&num);
    }
    if(max1 != max2)
        printf("%d",max2);
    else
        printf("0");
    return 0;
}
