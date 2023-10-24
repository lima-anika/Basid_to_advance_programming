#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int i;

char s[100000];

scanf("%s",s);

int cons=0;

for(i=0;i<strlen(s);i++)

{

if( (s[i]=='a') ||(s[i]=='e') ||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))

{
  continue;
}

else

{
  cons+=1;
}
}

printf("%d\n",cons);


    return 0;
}

