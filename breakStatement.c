/*Break statemente: it used to bring the program control out of the loop.
it used inside loops and switch statements.*/

//Example:

#include <stdio.h>

int main()
{
    for (int i=0; i<5;i++){
        printf("hi, the code after me is gonna break ..\n");
        break;         /* break statement just break the loop after it only inside the loop..
                         code after loop will run as expected ..*/ 
        printf("hiii, i will not print in the output , as break used before me..i wish i could be out of the for loop :(\n ");
    }
printf("haha,,Break statement can't stop me from printing..as i am out of for loop :)\n");

//if we use continue statement instead of break in above program then..
     
     for (int i=0;i<5;i++){
        printf("hi, i am printed\n");
        continue;   /*it will gonna continue the iteration untill the given condition in for
        loop becomes false..and code after it inside the loop will not execute..SINCE WE HAVE 
        USED CONTINUE STATEMENT..*/
        printf("huh.. i am never gonna print till when continue is there above me :(\n");
     }
    printf("yay! i am again out of the loop .. not even break and continue statements can stops me from printing..\n");
return 0;
}

/*THE ONLY DIFFERENCE BETWEEN BREAK AND CONTINUE IS THAT ... BREAK STATEMENT STOPS THE 
ITERATION OF THE LOOP WHILE CONTINUE STATEMENT DO NOT STOP THE ITERATION...*/