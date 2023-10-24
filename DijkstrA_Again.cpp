#include<iostream>
using namespace std;

int i,INT_MAX;
int vertex[6];
bool flag[6];

int min_vertex(vertex[],int i1)

{
    int m;


for(i=0;i<6;i++)
{
    /// ekhane min vertex ber korbo

if(vertex[i] < vertex[i1])
{
    m=vertex[i];
}


}

return m;


}

void dijkstra(int g[6][6],int src)
{
for(i=0;i<6;i++)
{
vertex[i]=INT_MAX;  /* ekhane vertex e infinite
value and flag e false rakha ase and eta holo visited na bojahi*/
flag[i]=false;
}

vertex[src]=0; ///source 0

for(i=0;i<6;i++)
{
    if(!flag[i] && vertex[i]==INT_MAX)
    {

    int m=min_vertex(vertex,i);  //
     }
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
		{0, 0, 0, 2, 1, 0}};

		dijkstra(graph,0);
}
