#include<stdio.h>
main()
{
    char name[500];
    gets(name);
   printf((strlen(name)>80)? "NO\n" : "YES\n");
   return 0;
}
