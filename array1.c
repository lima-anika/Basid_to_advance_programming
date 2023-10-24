
#include<stdio.h>

int main()

{
  int n,i,j=0;

scanf("%d",&n);

int k=n-1;

int n1=n;

int a[n];

int b[n];

for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);

}

i=0;

for(j=0;j<n;j++)
{
  if(j%2==0)
  {

    printf("%d ",a[i]);

    i+=1;
  }

  else
  {

    n1-=1;
    printf("%d ",a[n1]);

  }
}

}
