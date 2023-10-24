#include<stdio.h>
int main()
{
    int cost[6][6];
    int i,j,k,i1=0,saved[10];



cost[1][2]=1;
cost[1][3]=1;
cost[2][4]=1;
cost[3][4]=1;
cost[2][5]=1;
cost[3][6]=1;
int i2;
for(i=1;i<=6;i++)
{
    for(j=1;j<=6;j++)
    {
        if(cost[i][j]==1)
        {
            saved[i1]=j;

            for(i2=1;i2<i1;i2++)
            {
if(saved[i2]==j)
{
    cost[i][j]=0;
}
            }
            i1++;
        }
    }
}


 printf("%d  ",cost[2][4]);
    printf("%d  ",cost[3][4]);

}
