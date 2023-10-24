#include<iostream>
#include<math.h>
using namespace std;
int c=0;
int b(int a[],int si,int ei,int num)
{

int mid;
while(si<=ei)
{
    c++;
mid=(si+ei)/2;

if(a[mid]==num)
{

return 1;

break;
}
else if(a[mid]>num)
{
ei=mid-1;

}
else if(a[mid]<num)
{
si=mid+1;

}
}
return -1;

}

main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int si=1,ei=10,num=167;
int index=b(a,si,ei,num);

if(index==1)
{
    cout<<"Value Found"<<endl;
}
if(index==-1)
{
   cout<<"Value not Found"<<endl;
}

}
