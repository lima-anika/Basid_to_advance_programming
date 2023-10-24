#include<stdio.h>
int main()
{
    long long int *p,*q,*r,*s,*t,*u,*v;
    long long int i,j,*s1;
    do{
            *p=*q;
    *s1=(*r+*q)-1;
    *s1=*s;
    do{
        *s=*t;
        *s=*s-1;
        *r=*r+*u;
        *u=*r;
        *s=(*s+1)^*u;
        *u=*s+1;
        *u=*u^*r;
        *r=*r+1;

    }while(*s<*r);

    }while(*s<=*r);

}
