#include<iostream>
#include<iomanip>
using namespace std;
main()
{
  int n,a,n1=0,b,n2=0,n3=0,n4=0,n5=0;
  cin>>n;
  for(a=0;a<n;a++)
  {
      cin>>b;
      if(b%2==0)
      {
          n2++;
      }

      if(b%3==0)
      {
          n3++;
      }

      if(b%4==0)
      {
          n4++;
      }

      if(b%5==0)
      {
          n5++;
      }
  }

cout<<n2<<" Multiplo(s) de 2"<<endl;
cout<<n3<<" Multiplo(s) de 3"<<endl;
cout<<n4<<" Multiplo(s) de 4"<<endl;
cout<<n5<<" Multiplo(s) de 5"<<endl;
}

