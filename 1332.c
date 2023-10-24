#include <stdio.h>
#include<string.h>
main()
{
    char s[10];
    int n,l;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        l=strlen(s);
        if(l==5)
        {
            printf("3\n");
        }

       else if((s[0]=='t' && s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o')){
            printf("2\n");
    }

    else

    {
         printf("1\n");
    }
}


}
