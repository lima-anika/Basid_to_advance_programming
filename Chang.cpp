#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int bill[28]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150},i,flag=0;
    int d,m,n;
    while(1)
    {
        cin>>m>>n;
        if((m==0)&&(n==0))
        {
            break;
        }
        d=n-m;
        for(i=0,flag=0;i<15;i++)
        {
            if(d==bill[i])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"possible"<<endl;
        }
        else
        {
             cout<<"impossible"<<endl;
        }

    }
}
