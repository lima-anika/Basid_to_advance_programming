#include<bits/stdc++.h>
using namespace std;
main()

{
   int n,arr[100][100];
    int rows[100],cols[100];
   cin>>n;
   int num=0;
   while (n--)
   {
       int i=9,j=9,k1,k2;

       for (k1=0;k1<i;k1++)
       {
           for(k2=0;k2<j;k2++)

           {
               cin>>arr[k1][k2];
           }
       }


     int row=0;

     int k3=0;
      for (k1=0;k1<i;k1++)
       {
           for(k2=0;k2<j;k2++)

           {
               row+=arr[k1][k2];
           }

           rows[k3]=row;
           row=0;
           k3+=1;
       }
    int h=0;

     int col=0;

     int k4=0;
      for (k1=0;k1<i;k1++)
       {
           for(k2=0;k2<j;k2++)

           {
               col+=arr[k2][k1];
           }

           cols[k4]=col;
           col=0;
           k4+=1;
       }

    int cs,r=1;
    cs=cols[0];
    for(k1=0;k1<9;k1++)
    {cout<<cols[k1]<<" ";
        if (cs!=cols[k1])
        {

            r=0;
            break;
        }
    }

    cout<<endl;

     int cl=1;
    cs=cols[0];
    for(k1=0;k1<9;k1++)
    { cout<<rows[k1]<<" ";
        if (cs!=rows[k1])
        {

            cl=0;
            break;
        }
    }

    if ((r==1)&&(cl==1))
    {
        num+=1;
        cout<<"Instancia "<<num<<endl;
        cout<<"SIM"<<endl;
    }

      else
    {
        num+=1;
        cout<<"Instancia "<<num<<endl;
        cout<<"NAO"<<endl;
    }
   }
}

