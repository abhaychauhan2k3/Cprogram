/*(2)EXIT CONTROLLED LOOPS :
     in these loops the condition is tested at the end of the loop .. i.e it will execute 
     at least once. */
// --->Do While loop is exit controlled  loop...

/* (3)DO WHILE LOOP :
        Main difference between the while and do while loop is that in while loop condition 
        is tested before loop body and in do while condition is tested after the loop body.. 
    SYNTAX:
         do {
            ...set of statements...
                }while (condition)
example...:*/

#include <stdio.h>

int main()
{
    int a,i=0;
    printf("Enter the number of times you want execution(since we are using do while loop then code will must execute once):\n");
    scanf("%d",&a);

    do{
        printf("hey i am printed %d times..!!\n",a);
        i+=1;
    }while(i<a);

    return 0;
}