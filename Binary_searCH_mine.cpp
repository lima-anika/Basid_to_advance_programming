#include<iostream>
#include<math.h>
int a[10]={12,23,45,67,89,122,190,198,210,400};
int num=190,n1,n2,si=0,ei=9;
int mid;

int binary_Search(int si,int ei)
{
mid=(si+ei)/2;

if(a[mid]==num)
{
    return 1;
}

    else if(a[mid]<num)
    {
binary_Search(int mid+1,int ei);
    }

    else if(a[mid]>num)
    {
        binary_Search(int si,int mid-1);
    }

    else
    {
        return -1;
    }
}


main()
{
binary_Search(si,ei);
}
