#include <stdio.h>
int main ()
{
    int i,n,fac=1;
    printf("enter the value whose factorial you want:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        fac=fac*i;    
        }
    printf("the value of factorial is %d",fac);
    return 0;
}