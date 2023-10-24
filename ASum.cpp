#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
main()
{
    double a[100][100],s=0;
    int i,j,k=1,k1=0;
    char s1;
    cin>>s1;

    for(i=0;i<12;i++)
    {
     for(j=0;j<12;j++)
     {
         cin>>a[i][j];
     }
    }
    for(i=11;i>6;i--)
    {
        for(j=k;j<=(12-(k+1));j++)
        {
            s=s+a[j][i];
            k1++;
        }
        k++;
    }
     switch(s1)
    {
    case 'S':
        {
              cout<<fixed<<setprecision(1)<<s<<endl;
            break;
        }
    case 'M':
        {
             cout<<fixed<<setprecision(1)<<s/k1<<endl;
            break;
        }
    }
}
