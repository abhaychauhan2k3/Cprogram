#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i=1;
    printf("enter the number whose table you want to print:");
    scanf("%d",&n);
     do
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++; 
    }while(i<=10);
    getch();
}