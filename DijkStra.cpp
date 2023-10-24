#include<iostream>
using namespace std;
int i,j,max_in,vertex[6];
bool flag[6];

int max_vertex(int vertex[6],int n)
{
    int m=n;
    for(i=0;i<6;i++)
    {
if(i<m)
{
    m=i;
}
    }
    return m;
}

void dijkstra(int g[6][6],int src)
{
    for(i=0;i<5;i++)
    {
vertex[i]=max_in;
flag[i]=false;
    }
    for(i=0;i<6;i++)
    {
        j=max_vertex(vertex,i);
        vertex[j]=true;
        if(g[j][i] && !flag[j]  && vertex[j]+g[j][i] < vertex[i] )
        {
            vertex[i]= vertex[j]+g[j][i];

        }
    }
    flag[src]=true;
}

main()
{
    int g[6][6]={};
    dijkstra(g,0);
}
