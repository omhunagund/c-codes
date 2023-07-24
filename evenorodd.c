#include<stdio.h>
main()
{
    int a,rem;
    printf("Enter an integer:");
    scanf("%d",&a);
    rem=a%2;

    switch(rem)
    {
    case 0:
        printf("Even");
        break;
    default:
        printf("odd");
    }
}
