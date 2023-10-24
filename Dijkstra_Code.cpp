#include<iostream>
using namespace std;


int i,j,m,val,m1,min_val=INT_MAX;

int node[6];
bool visited[6];

int min_node(int j,int node[6])
{
min_val=node[j];
    for(i=0;i<6;i++)
    {
        if ((node[i]<min_val)&& (!visited[i]))
        {
            min_val=node[i];
        }
    }
return i;

}


void dijkstra(int g[6][6], int src)

{
    int m1=INT_MAX;

for(i=0;i<6;i++)
{
    node[i]=INT_MAX;
    visited[i]=false;
}

node[src]=true;

for(i=0;i<6;i++)
{
int index=min_node(i,node);
visited[index]=true;
for(j=0;j<6;j++)
{
if(!visited[j] && g[index][j] && node[index]+g[index][j]<node[j])
{
    node[j]= node[index]+g[index][j];
}
}
}

for(i=0;i<6;i++)
{
    cout<<" path : "  << node[i] <<endl;
}

}


main()
{


int graph[6][6]={
		{0, 10, 20, 0, 0, 0},
		{10, 0, 0, 50, 10, 0},
		{20, 0, 0, 20, 33, 0},
		{0, 50, 20, 0, 20, 2},
		{0, 10, 33, 20, 0, 1},
		{0, 0, 0, 2, 1, 0}

		};

dijkstra(graph,0);

}


