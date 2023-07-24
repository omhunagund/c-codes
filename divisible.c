#include<stdio.h>
main()
{
    int a;
    float x,y;
    printf("Enter an integer:");
    scanf("%d",&a);
    x=a%7;
    y=a%11;

    if(x==0 && y==0)
    {
        printf("Divisible by 7&11\n");
    }
    else if(x==0 && y!=0)
    {
        printf("Divisible only by 7\n");
    }
    else if(x!=0 && y==0)
    {
        printf("Divisible only by 11\n");
    }
    else
    {
        printf("Not divisible by both");
    }
}
