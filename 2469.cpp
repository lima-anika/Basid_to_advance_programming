#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int cont[101]={0};
    int i,num;

    for(i=0;i<n;i++)
    {
        cin>>num;
        cont[num]+=1;
    }

    int bib=cont[0];

    for(i=0;i<101;i++)
    {
        if(cont[i]>bib)
        {
            bib=cont[i];
            int n1=i;
        }
    }

    int c=0,ar[10],j=0;

    for(i=0;i<101;i++)
    {
       if (bib==cont[i])
       {
           c+=1;
           ar[j]=i;
           j+=1;
       }
    }





     int max = ar[0];

    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 0; i < j; i++)
    {


        if (ar[i] > max)
            max = ar[i];
}

cout<<max<<endl;



}
