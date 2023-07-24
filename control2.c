#include<stdio.h>
main()
{
    int age;
    printf("Enter age of person:");
    scanf("%d",&age);
    printf("age=%d",age);

    if(age<18)
    {
        printf("Not eligible to vote\n");
    }
    else
    {
        printf("Eligible to vote");
    }
}
