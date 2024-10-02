#include <stdio.h>

int main()
{
    int a;

    printf("enter the number you want to check for even or odd:\n");
    scanf("%d",&a);

    if(a%2==0){
        printf("Entered number is even..");
           }
    else {
        printf("the number is odd..");
    }
}