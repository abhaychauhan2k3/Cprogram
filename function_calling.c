/*TYPES OF FUNCTION CALLING:
there are two types of funtion calling:
1)CALL BY VALUE. 
2)CALL BY REFERENCE.
*/

//CALL BY VALUE:
/* when we call a function by its value , it means that we are passing the values of arguments
 which which are COPIED into the formal parameters of the function, which means that the original 
values remains UNCHANGED and parameter inside the function change ...*/

//example of funtion call by value is in file named -- ActualandFormal.c

//CALL BY REFERENCE :
/* the call of reference method of passing arguements to a C function copies the ADDRESS to the 
arguments into the formal parameters .

Address of the actual arguement are copied and then assinged to the coressponding formal 
agruements.

---> the value of actual parameters can be CHANGED by call by reference...
*/
//EXAMPLE :


#include <stdio.h>
#include <conio.h>
void swap(int* x,int*y)  // here we are passing pointers as formal parameters ...
{
    int temp=*x;    //value of x is getting stored in temp variable (temp is local variable)
    *x=*y;    //storing value of y in x
    *y=temp;  //temp containing value of x and now value of temp getting stored in y 
}
void main (){
    int a=34,b=40;
    printf("the value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("the value of a is %d and b is %d\n",a,b);
}