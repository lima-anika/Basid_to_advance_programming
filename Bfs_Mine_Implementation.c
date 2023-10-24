#include<stdio.h>
int main()
{
    int cost[6][6];
int i,j,k;
for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
        cost[i][j]=0;
    }
    //printf("\n");
}
for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
        printf("%d  ",cost[i][j]);
    }
     printf("\n");
}

for(k=0;k<6;k++)
{
    printf("\n Enter i & j :");
scanf("%d",&i);
scanf("%d",&j);
cost[i][j]=1;
}


for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
        printf("%d  ",cost[i][j]);
    }
     printf("\n");
}
int s,visited[6],rear=1,front=1,queue[10];

 printf("\n Enter Source :");
 scanf("%d",&s);
visited[s]=1;
int node_bfs[6],k1=1,traverse[10],k2=1;
node_bfs[k1]=s;
k1++;
k=0;
int set;
int visit[10],j1=s,j2=1;
while(k<=4)
{
     printf(" \n k value: %d ",k);
    for(j=1;j<=6;j++)
    {

if(cost[s][j]==1 && visited[s]==1)
{

    queue[rear]=j;


     printf(" \n Queue Rear: %d ",queue[rear]);
    rear++;
     printf(" \n Rear: %d ",rear);
}


    s=queue[front];
     printf(" \n Queue Front: %d ",queue[front]);
    node_bfs[k1]=s;
    k1++;
    front++;
     printf(" \n Front: %d ",front);
    visited[s]=1;
    printf(" \n visited S: %d ",s);
    k++;
}
}


 printf("\n  Nodes are :");
for(i=1;i<=6;i++)
{
    printf("%d ",node_bfs[i]);
}

}
