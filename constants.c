//CONSTANTS ARE THE VARIABLE WHICH ARE HAVING THE FIXED VALUE..

/*Constants can be assing by two ways ...(1)by constant keyword ..
(2)by defining in pre procesor command using # */

#include <stdio.h>
#define pi 3.14   // METHOD (2)..
int main()
{
    float c=pi;
    printf("value of c is %0.2f\n", c);

    const int a=12;     //METHOD (1)...
    printf("value of a is : %d\n",a);
    return 0;
     
    //IF WE TRY TO CHANGE THE VALUE OF pi AND a THEN IT WILL GONNA SHOW ERROR ...!! AS THEY ARE CONSTANTS.. 
}