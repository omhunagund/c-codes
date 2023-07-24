#include<stdio.h>
main()
{
    int temp;
    printf("Enter the temp:");
    scanf("%d",&temp);

    if(temp<0)
    {
        printf("Freezing cold");
    }
    else if(temp<10)
    {
        printf("Chill weather");
    }
    else if(temp<20)
    {
        printf("Cold");
    }
    else if(temp<28)
    {
        printf("Pleasant");
    }
    else if(temp<35)
    {
        printf("Warm");
    }
    else
    {
        printf("Hot weather");
    }
}
