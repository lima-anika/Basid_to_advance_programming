#include<stdio.h>
main()
{
    char s[101];
    double t=0,c=0,d;
    while(gets(s))
    {
        scanf("%lf",&d);
        t+=d;
        c++;
    }
    printf("%.1lf\n",d /c);
}
