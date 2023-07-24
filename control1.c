#include<stdio.h>
main()
{
    int p,c,m,t;
    float a;
    printf("Enter physics marks=");
    scanf("%d",&p);
    printf("Enter chemistry marks=");
    scanf("%d",&c);
    printf("Enter maths marks=");
    scanf("%d",&m);

    t=p+c+m;
    a=t/3.0;
    printf("Total=%d\n",t);
    printf("average=%f\n",a);

    if(a<35)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
}
