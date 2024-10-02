//LOOPS IN C :  
//If we wamt to perform an action again and again then we use the concept of looping..

/*Types of loops: 
(1)Entry controlled loops: in these types of loops the text condition is evaluated before
entrying the loop..it means they check the condition before entrying into the loop..
--> for loop and while loop are entry controlled loops*/ 

// (1) WHILE LOOP:
   /* it is an entry controlled loop, it is also known as pre tested loop..
   SYNTAX:
         while (condition){
        ... set of statements .... 
         }   example ..:*/

#include <stdio.h>

int main()
    {
        int a,i=0;
        printf("enter the value of a(the number of times you wanna execute the code) :\n");
        scanf("%d", &a);

        while(i < a){
            i+=1;
            printf("hey i am printed %d times\n", a);
        }
    return 0;

    }



