/*Type casting :
it is used to convert the data type of any variable...*/

//example:

#include <stdio.h>


int main()
{
    int a,b;
    printf("enter an integer number you wanna type cast to float:");
    scanf("%d",&a);

    printf("\n%d is converted to float as %f\n",a,(float)a);

    return 0;

}