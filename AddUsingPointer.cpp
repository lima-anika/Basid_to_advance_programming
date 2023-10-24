#include<iostream>
using namespace std;
int fun(int *p, int *q)
{
    int r=*p+*q;
    return r;
}
main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int d=fun(&a,&b);
    cout<<d;
}
