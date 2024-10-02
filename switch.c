//SWITCH STATEMENT :it is just the alternative for is else statements..
/* switch statement should be int or char .
   case value must be an integer or a charcter 
   case must be inside the switch 
   break is not must 
*/

/* SYNTAX: 
           switch(variable){
                case 1:
                      ... code ....
                case n:
                      ... code ....
                default: 
                    .... code ....
                           } 
                                 example :"
                                 */

#include <stdio.h>

int main()
{
int a;
printf("enter your age :");
scanf("%d",&a);

switch (a){
        case 18:
              printf("YOU ARE ELIGIBLE FOR VOTING !!!\n ");
              break;      // if we dont use break here then it will gonna print all case statements ..????
        case 21:

              printf("YOU ARE ELIGIBLE TO TAKE PART IN PG !!\n");
              break;
        default:
              printf("NOTHING MATCHED !!\n");

              }
return 0;

}