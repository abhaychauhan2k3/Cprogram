#include <stdio.h>
int main(){
char a;

printf("Enter the subjects in which you are pass in(m for math,s for science,b for both):");
scanf("%c",&a);

if (a=='m'){
    printf("Congrats you got a prize of 15 ruppes, You are passed in ,maths.. ");
    }
else if (a=='s'){
    printf("Congrats you got a prize of 15 ruppes, You are pass in science..");
    }
else if(a=='b'){
    printf("Wohooo You are passed in both subjects , You got a prize of 45 ruppes....");
     }
else {
    printf("BETTER LUCK NEXT TIME, WORK HARD!!!");
    }
return a;   //if we are taking input as char by user then this will be the return type...!! 

}

//YAY! GRABBED IT :)
// not working by inputing full word ... error showing--> multi-char ???
