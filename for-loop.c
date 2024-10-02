/*(ENTRY CONTROLED LOOP)
(2)FOR LOOP :
         the for loop is used to iterate the statements several times.It is used to transverse
the data structures like the arrrays and linked lists.
        SYNTAX :
                for (Exprssion 1; Expression 2; Expressioin 3){
                    ... code to be run.....
                                                              }
 */
/*Expressioin 1:
This expression represents the initialisation of the loop variable.
can initialise more than one variable.
it is optional */

/*Expression 2:
it is a conditional expression it check for a specific condition to be satisfied , if not
then the loop will terminate.
can have more than one condtion.(the loop will iterate until the last condition becomes false)
it is optional.
it can perform the task of expression (1) and (2).
*/

/*Expression (3):
Expression (3) is used to update the loop variable .
can update more than one variable .
it is optional*/

//Example:

#include <stdio.h>

int main()
{
int a,i;
printf("enter the number of times you wanna execute the code :\n");
scanf("%d",&a);
    
    for(i=1; i <= a; i+=1){
        printf("i am printed %d times\n", a);

    }
return 0;

}
