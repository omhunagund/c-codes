#include<stdio.h>
main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Not a vowel\n");
    }
}
