#include<iostream>
using namespace std;
main()
{
    int ca=0,cb=0,n,i,a,b;
    while(cin>>n && n!=0)
        {
            ca=0,cb=0;
            for(i=0;i<n;i++)
            {
                cin>>a>>b;
                if(a>b)
                {
                    ca++;
                }
                if(b>a)
                {
                    cb++;
                }
            }
            cout << ca << " " << cb << endl;
        }
}
