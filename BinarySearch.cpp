#include<iostream>
using namespace std;
int size=10;
int startindex,endindex,midindex,value;
int arr[10]={12,44,2,43,18,37,56,20,62,52};
int binary_search(int startindex,int endindex,int value)
{
    int midindex=(startindex+endindex)/2;
cout<<"midindex"<<midindex<<endl;
    if(arr[midindex]==value)
    {
        return midindex;
    }
    else
    {
        if(startindex>=endindex)
        {
            return -1;
        }
        else
        {
            if(arr[midindex]>value)
            {
                binary_search(startindex,midindex-1,value);
            }
            else
            {
                binary_search(midindex+1,endindex,value);
            }
        }
    }
}
int main()
{
int res=binary_search(0,9,52);
if(res<0)
{
    cout<<"404 not found!!!"<<endl;
}
else
{
    cout<<"value is at "<<midindex<<"index"<<endl;
}
}
