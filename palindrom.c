#include<stdio.h>
void main ()
{
    int n,r=0,temp;
    printf("enter the number of palindrom or not");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
    r=r*10;
    r=r+ temp%10;
    temp=temp/10;
    }
    if (n==r)
    
        printf("%d it is a palindrom\n",n);
        else
        printf("%d it is not a palindrom\n",n);
    
}
