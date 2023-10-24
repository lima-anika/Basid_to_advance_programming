#include<stdio.h>
#include<stdio.h>

int main()

{
  char s[10005];

  int n,i;

  scanf("%s",s);

  int count[10003]={0};

  int s1=0;

  for(i=0;i<strlen(s);i++)
  {
    int d=s[i]-'a';

    count[d]+=1;

    if(count[d]==1)
    {
      s1+=1;
    }
  }


printf("\n%d\n ",s1);

  for(i=0;i<26;i++)
  {
    if(count[i]==0)
    {
      continue;
    }
    else
    {
      char c1=i+'a';

    printf("%c - %d\n",c1,count[i]);
    }
  }

}
