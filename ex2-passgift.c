#include <stdio.h>
int main(){
int a;

printf("Enter the subjects in which you are pass in(1 for maths, 2 for science and 3 for both):");
scanf("%d",&a);

if (a==1){
    printf("Congrats you got a prize of 15 ruppes, You are passed in ,maths.. ");
    }
else if (a==2){
    printf("Congrats you got a prize of 15 ruppes, You are pass in science..");
    }
else if(a==3){
    printf("Wohooo You are passed in both subjects , You got a prize of 45 ruppes....");
     }
else {
    printf("BETTER LUCK NEXT TIME, WORK HARD!!!");
    }
return 0;

}