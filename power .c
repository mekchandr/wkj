#include<stdio.h>
void main ()
{
    int a,b,c,d=1;
    printf ("enter a and b");
    scanf("%d%d",&a,&b);
    for (c=1;c<=b;c++)
    d=d*a;
    {
        printf ("power %d",d);
    }
    
}

