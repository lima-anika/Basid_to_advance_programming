#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int high=100,low=1,guess=9,my=98;

    while(1)
    {

    guess=high+low-1;
    int round=guess/2;
    if(round==my)
    {
        cout<<"win"<<endl;
        break;
    }
    else if(round>my)
    {
        high=round-1;
    }

    else if(round<my)
    {
        low=round+1;
    }
    }
}
