#include<stdio.h>
#include<math.h>
int a[10]={12,24,35,58,63,70,75,80,83,112};
int num=83,n1,n2=0,n3=9,s=0;
int binary_search(int n2,int n3)
{

while(n2<=n3)
{ n1=(n2+n3)/2;
    s++;
    if(s>10)
    {
        break;
    }
if(a[n1]==num)
{
return 1;
break;
}
else if(a[n1]<num)
{
    n2=n1+1;
}
else if(a[n1]>num)
{
    n3=n1-1;
}

}
return -1;
}


int main()
{
    int n;
 n=binary_search(int n2,int n3);
 return 0;
}
