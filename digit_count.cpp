#include<iostream>
using namespace std;
long long int i=0;
long long int digit(long long int n)
{
    long long int a;
    if(n==0)
    {
        return i;
    }
    else
    {
        a=n%10;
        i++;
        n=n/10;
        digit(n);
    }
}

main()
{
long long int n;
cin>>n;
long long int i=digit(n);
cout<<i;
}
