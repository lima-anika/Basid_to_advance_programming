#include<iostream>
#include<iomanip>
using namespace std;
main()
{


double p,q,r,s,t1=0,t2=0,t3=0,t4=0,t5=0,t6;
cin>>p;
for(q=0;q<p;q++)
{
    cin>>r>>s;
    if(r==1001)
    {
        t1=s*1.5;
    }

    if(r==1002)
    {
        t2=s*2.5;
    }

    if(r==1003)
    {
        t3=s*3.5;
    }

    if(r==1004)
    {
        t4=s*4.5;
    }
    if(r==1005)
    {
        t5=s*5.5;
    }
    t6=t1+t2+t3+t4+t5;



}


    cout<<fixed<<setprecision(2)<<t6<<endl;
}
