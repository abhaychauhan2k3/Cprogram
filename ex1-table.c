// To print a table of a number input by the user..

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the  number whose table you want to print:\n" );
    scanf("%d",&a);

    printf("the table of number is :\n%d * 1 = %d\n", a,a*1);
    printf("%d * 2 = %d\n", a,a*2);         // to replicate a line press alt + shift + down arrow...

    printf("%d * 3 = %d\n", a,a*3);         // alt + click for multi cursor... 
    printf("%d * 4 = %d\n", a,a*4);
    printf("%d * 5 = %d\n", a,a*5);
    printf("%d * 6 = %d\n", a,a*6);
    printf("%d * 7 = %d\n", a,a*7);
    printf("%d * 8 = %d\n", a,a*8);
    printf("%d * 9 = %d\n", a,a*9);
    printf("%d * 10 = %d\n", a,a*10);
    printf("%d * 11 = %d\n", a,a*11);

    return 0;
    
}