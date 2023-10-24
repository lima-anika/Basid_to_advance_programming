#include<stdio.h>
#include<string.h>
main()
{
char s[1000];
gets(s);
int l=strlen(s);

//printf(" %d  ",l);

int i,c=0,w[100],j=0,k=0;

for(i=0;i<l;i++)
{

    if(s[i]==32)
    {
        w[j]=c;
        //printf(" %d C \n ",c);
        k++;
        j++;
        c=0;
    }
    else

    {
        c++;
    }
}
l=w[0];

for(i=1;i<k;i++)
{
    if(w[i]>l)
    {
        l=w[i];
    }
}

printf(" %d length ",l);
}
