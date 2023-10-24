#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    double b,c,n,a;
    cin>>n;
    a=pow((1+sqrt(5))/2,n);
     b=pow((1-sqrt(5))/2,n);
     c=(a-b)/sqrt(5);
     cout<<fixed<<setprecision(1)<<c<<endl;

}
