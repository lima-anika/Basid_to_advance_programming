#include <stdio.h>
#include <string>

main()
{
    string s;
    int i,n,size,j,c=0,d=0;
    printf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        size=s.length();
        for(j=0;j<size;j++)
        {
            if(s[j]=="<")
            {
                c++;
            }
            if(c>0&&s[j]==">")
            {
                c--;
                d++;
            }
        }
        printf("%d\n",d);
    }
}
