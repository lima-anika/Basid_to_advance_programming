#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
main()
{
    char s1;

    double a[100][100],s=0;
    int i,j,l;
    cin>>l;
    cin>>s1;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<12;j++)
    {
        s=s+a[j][l];
    }

    switch(s1)
    {
    case 'S':
         cout<<fixed<<setprecision(1)<<s<<endl;
        break;

        case 'M':
             cout<<fixed<<setprecision(1)<<s/12.0<<endl;
        break;
    }
}
