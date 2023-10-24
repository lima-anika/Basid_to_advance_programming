#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
main()
{
    double s=0,a[100][100],k=0,k1=0;
    int i=0,j=0;
    char c1;

    cin>>c1;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=11;i>=0;i--)
    {
        for(j=11;j>k1;j--)
        {
            s=s+a[i][j];
            k++;
        }
        k1++;
    }
    switch(c1)
    {
    case 'S':
                 cout<<fixed<<setprecision(1)<<s<<endl;
        break;

        case 'M':
                 cout<<fixed<<setprecision(1)<<s/k<<endl;
        break;
    }
}
