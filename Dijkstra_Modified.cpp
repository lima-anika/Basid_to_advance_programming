#include<iostream>
#include<climits>
using namespace std;


int i,j,m,val,index1,min_val=INT_MAX;

int node[4];
bool visited[4];

int min_node(bool visited[4],int node[4])
{
    for(i=0;i<4;i++)
    {
        if ((node[i]<min_val)&& (visited[i]==false))
        {
            min_val=node[i];
            index1=i;
            //cout<< "min val "<<min_val<<endl;
        }
    }
return index1;
//cout<<"I :"<<i<<endl;
}


void dijkstra(int g[4][4], int src)

{

for(i=0;i<4;i++)
{
    node[i]=min_val;
    visited[i]=false;
}


node[src]=true;

for(i=0;i<4;i++)
{

int index=min_node(visited,node);
visited[index]=true;
//cout<<"index "<<index<<endl;

//visited[index]=true;

for(j=0;j<4;j++)
{

if(!visited[j] && g[index][j] && node[index]+g[index][j]<node[j]  && node[index]!=INT_MAX)
{
    node[j]= node[index]+g[index][j];

    cout<<"modified node "<<node[j]<<endl;
}
}
}

for(i=0;i<4;i++)
{
    cout<<" path : "  << node[i] <<endl;
}

}


main()
{


int graph[4][4]={
		{0, 10, 20, 0},
		{10, 0, 0, 50},
		{20, 0, 0, 20},
		{0, 50, 20, 0}};

dijkstra(graph,0);

}


