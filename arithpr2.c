#include<stdio.h>

int main()

{
    long long a,b,c;

    long long d;

    int f=0;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    long long d1;

    d1=a+(b*c);

    if (d1==d)
    {
        printf("YES\n");
        f=1;
    }

    d1=a+b-c;

    if(d1==d)
    {
          printf("YES\n");
          f=1;
    }

    d1=(a*b)-c;

    if(d1==d)
    {
          printf("YES\n");
          f=1;
    }

    d1=(a*b)+c;

    if(d1==d)
    {
          printf("YES\n");

          f=1;
    }

    d1=a-b*c;

    if(d1==d)
    {
          printf("YES\n");

          f=1;
    }

    d1=a-b+c;

    if(d1==d)
    {
          printf("YES\n");

          f=1;
    }

    if  (f==0)
    {
          printf("NO\n");


    }

}

