#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char s[10004];

   int t,i,j,cap,small,digit;

   scanf("%d",&t);

   for(i=0;i<t;i++)

   {
     cap=0;

     small=0;
     digit=0;

     scanf("%s",s);

     for(j=0;j<strlen(s);j++)
     {

       if(s[j]>='A' && s[j]<='Z')
       {
         cap+=1;
       }
      else if(s[j]>='a' && s[j]<='z')

       {
         small+=1;
       }

       else if(s[j]>='0' && s[j]<='9')
       {
         digit+=1;
       }
     }

     printf("%d %d %d\n",cap,small,digit);
   }

    return 0;
}

