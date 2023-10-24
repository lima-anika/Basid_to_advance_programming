#include<iostream>
using namespace std;
int n,c=0,s=0;

    int f(int n)
    {
        c++;
        if(c%2!=0)
        {
            s=s+n;
            if(n==1)
            {
                return s;
            }
            n=n-2;
            f(-n);
        }
        else
        {
            s=s+n;
            n=n*(-1);
            n=n-2;
            f(n);
        }
    }
main()
{
    cin>>n;
    int s=f(n);
    cout<<endl<<s;
}
