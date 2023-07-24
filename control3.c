#include<stdio.h>
main()
{
    int a,b;
    printf("Enter an integer a:");
    scanf("%d",&a);
    printf("Enter an integer b:");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a is big");
    }
    else if(b>a)
    {
        printf("b is big");
    }
    else
    {
        printf("both are equal");
    }
}

