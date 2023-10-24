#include<iostream>
using namespace std;
main()
{
    int a[]={8,7,2,5,3,1};
    int s=10,i,j=0,k;
    for(i=0;i<6;i++)
    {
k=i;

while(j!=i && j<6)
{
    if(a[i]+a[j]==10)
    {
        cout<<"index["<<i<<"]  + "<<"index["<<j<<"] = "<<s<<endl;
    }
    j++;
}
j=0;
    }

}
