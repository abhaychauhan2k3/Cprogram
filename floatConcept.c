#include <stdio.h>

int main()

{
    //float x;
    //printf("this is a good boy %a.bf",x);
    /*here in above example code a is used to assing space to the number we input....
    and b is used to assing decimal places after decimal point , if value of a is negative then the space is 
    taken after the number*/
    /*value of a should be greater then the length of the number to see spaces as it counts the lenth of number too
    while adding space !!!   see example below..*/

    float x=18;
    printf("lets use the concept of float\n%16.5f\n",x); 

    /* in length of number it will count the decimal places too..., so if you are giving decimal places as 5 and length 
    of number is 2 and white spaces as 16 then it will give only 9 spaces before the number and rest 7 is the length
    of the number and decimal places...!!!*/

    printf("use of negative sign\n%-16.5f  hello i am after the spaces..!! ",x);

    return 0;
    
}