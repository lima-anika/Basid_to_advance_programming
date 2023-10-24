
#include<iostream>
#include<stdlib.h>
using namespace std;

struct points
{
    int x,y;
};

points p1[10];
points p2[10];

main()

{
    int i=0,j=1,c=1,k=0,d,s1,f2=0,c1=0,c3=1;

    for(i=0;i<10;i++)
    {
        cin>>p1[i].x;
        cin>>p1[i].y;
    }


        for(i=0;i<10;i++)
        {
            if((p1[i].y==1) || (p1[i].y==-1))
            {
                p2[k].y=p1[i].y;
                p2[k].x=p1[i].x;
                c1++;
                k++;
            }
        }

k=0;


            for(j=k+1;j<c1;j++)
            {
                cout<<"K Value:  "<<k<<" J Value:  "<<j<<endl;
                cout<<"Kth X Value  "<<p2[k].x<<" jth X Value   "<<p2[j].x<<endl;
                 cout<<"Kth Y Value   "<<p2[k].y<<" jth Y Value    "<<p2[j].y<<endl;
                if(p2[k].x!=p2[j].x)
                {
                    cout<<"In Loop"<<endl;

                    f2=abs(p2[k].y-p2[j].y);

                    if(f2==2)
                    {

                        k=j;

                        cout<<"before exiting loop value of K is   "<<k<<endl;

                        c3=c3+1;
                    }
                }
            }

cout<<endl<<"C:    "<<c3;
}
