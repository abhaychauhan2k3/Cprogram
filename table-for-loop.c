#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter the number whose table you want to print : ");
    scanf("%d",&a);

    for(i=1;i<=10;i+=1){
        printf("%d * %d = %d\n", a,i, a*i);
                      }
return 0;
}