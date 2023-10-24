#include<stdio.h>
#include<string.h>
int n,len,i,j,c=0;
char ch[10];
main()
{
    gets(ch);
    strlen(ch);

    for(i=0;i<n;i++)
    {
        if(ch[i]=='1' || ch[i]=='2')
        {
        if(ch[i]=='2')
        {
            if(ch[i+1]<'7')
            {
                c++;
            }
        }
        }
    }

}
