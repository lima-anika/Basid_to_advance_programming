#include<stdio.h>


int main()
{
  char s1[10002];

  gets(s1);

  //scanf("%s",s1);

  for(int i=0;i<strlen(s1);i++)
  {
    if(s1[i]==',')
    {
      s1[i]=' ';

      printf("%c",s1[i]);
    }

    else if(s1[i]>='A' && s1[i]<='Z')

    {
      s1[i]= tolower(s1[i]);
      printf("%c",s1[i]);
    }

     else

    {
      s1[i]= toupper(s1[i]);
      printf("%c",s1[i]);
    }
  }


}
