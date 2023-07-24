#include<stdio.h>
main()
{
    int p,c,m,t;
    float a;
    printf("Enter p marks:");
    scanf("%d",&p);
    printf("Enter c marks:");
    scanf("%d",&c);
    printf("Enter m marks:");
    scanf("%d",&m);

    t=p+c+m;
    a=t/3.0;

    printf("total=%d\n",t);
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
