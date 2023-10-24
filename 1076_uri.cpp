#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int t,n,v,a,graph[50][50],from,to;
int i,j;

main()
{
cin>>t;

while(t--)
{
    cin>>n;//start & end node
    cin>>v>>a;

    for (i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            graph[i][j]=0;
        }
    }
    for(i=0;i<a;i++)
    {
        cin>>from>>to;
        graph[from][to]=1;
    }


}
}
