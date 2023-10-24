#include<iostream>
using namespace std;
int c=0;
int k;
int s2=0,n=9;
int sum(int i)
{
c++;





if(c%2!=0)
       {

       s2=s2+i;
       k=i+2;
        sum(-k);
       }
       else
       {
           s2=s2+i;
           k=i+2;
           sum(k);
       }
       if(c==n)
       {
           return s2;
       }

      if(c==n)
       {
           return s2;
       }
}
main()
{
    int i=1;

    int s1=sum(i);

    cout<<endl<<s1;
}
