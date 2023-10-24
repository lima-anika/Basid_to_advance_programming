#include<stdio.h>

#include<string.h>

main()
{
    int i,t,pa,pb,j=0;
    double g1,g2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        j=0;
        scanf("%d %d %lf %lf",pa,pb,g1,g2);
        while(pa<=pb)
        {
            pa=pa+(g1*pa)/100;
             pb=pb+(g2*pb)/100;
             j++;
             if(j>=100)
             {
                  printf("Mais de 1 seculo.\n");
            break;
             }
        }
          if(j <= 100)printf("%d anos.\n",j);
    }
}
