#include <stdio.h>
int main()
{
    int a,b,c;
    int d;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    printf("enter the operation you want to perform (+,-,/,modulus):\n");
    scanf("%d",&d);

    switch (d)
    {
        case 1:
        c=a+b;
        printf("a+b = %d",c);
        break;

        case 2:
        c=a-b;
        printf("a-b = %d",c);
        break;

        case 3:
        c=a/b;
        printf("a/b = %d",c);
        break;

        case 4:
        c=a%b;
        printf("a modulus b = %d",c);
        break;

        default:
        printf("invalid char");
    }
return 0;
}