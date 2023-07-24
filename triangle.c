#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the side a:");
    scanf("%d",&a);
    printf("Enter the side b:");
    scanf("%d",&b);
    printf("Enter the side c:");
    scanf("%d",&c);

    if(a==b && b==c)
    {
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Isocelus");
    }
    else
    {
        printf("Scalene");
    }
}
