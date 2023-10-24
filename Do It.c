#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,k,i=0,j;

scanf("%d %d",&n,&k);

while(i<n)

{
  for(j=1;j<=k;j++)
  {
    printf("%d ",j);
  }

  printf("\n");

  i+=1;
}
    return 0;
}

