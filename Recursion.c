/*Recursion : it is a process when a function calls a copy of itself to work on a smaller
problem . Any fuction which calls itself is called a recursive funcion.A termination condition
is imposed on them to stop them executing copies of themselves forever.
Any problem that can be solved recursively can be solved iteratevly(i.e by using loops ) .
*/
/* The case at which the function does not recur is called the base case and when function 
keeps calling itself for subtask is called recursive case.*/

//Eample: FACTORIAL CALCULATOR
                                                  //Iterative Approach:
#include <stdio.h>                               //int factorial=1;
int factorial(int num){                       //for (i=num;i>0;i--){
                                                  //factorial=factorial*num;
    if (num == 1 || num == 0){                                     //}
        return 1;
                             }
    else {
        return (num * factorial(num-1));

    }                         
}
int main(){
int number;
printf("Enter the number you want to do factorial of:\n");
scanf("%d",&number);
printf("the factorial of %d is %d",number , factorial(number));
return 0;
}