#include<stdio.h>

int main()

{
  int n,i,j;

scanf("%d",&n);

int a[n],op=0;

for (j;j<n;j++)

{
  scanf("%d",&a[j]);
}

for(j=0;j<n;j++)

{
  if ((j==0) || (j==n-1))
  {
    continue;
  }

  else
  {
    if((a[j]<0)&&(a[j+1]<0)&&(a[j-1]<0))
    {
      op+=1;
    }

    else if((a[j]<0)&&(a[j+1]<0)&&(a[j-1]>0))
    {
      op+=1;
    }

    else if((a[j]<0)&&(a[j+1]>0)&&(a[j-1]<0))
    {
      op+=1;
    }

    else if((a[j]>0)&&(a[j+1]>0)&&(a[j-1]>0))
    {
      op+=1;
    }

     else if((a[j]>0)&&(a[j+1]>0)&&(a[j-1]<0))
    {
      op+=1;
    }

    else if((a[j]>0)&&(a[j+1]<0)&&(a[j-1]>0))
    {
      op+=1;
    }

  }
}

for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

printf("%d\n",op);

}
