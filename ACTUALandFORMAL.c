//ACTUAL AND FORMAL PARAMETERS:
/*ACTUAL:
when a function is called the values (expression) that are passed in the call 
are called the argument or actual parameter.*/

/*local variable and global variable : the variable defined in the function is known as 
local variable . These cannot be identified outside the function. 
while global variable are defined inside the main function .*/
/*FORMAL:
formal parameters are local variables which are assinged values from the arguements when the 
function is called. */

//on changing formal parameters the the value of actual parameters do not change..
//it can be done calling a function by reference i.e by using its address ..

//EXAMPLE:

#include <stdio.h>
int add(int a, int b){  //here a and b are formal variables ..
    int sum = a+b;  //here sum is a local variable .
    return sum;
}
void main(){
    int x,y,z;  //these are global variable ..
    printf("enter two numbers to add:");
    scanf("%d%d",&x,&y);
    z=add(x,y);//here x and y are the actual parameters or arguements...
    printf("the sum of %d and %d is %d",x,y,z);
}
