//STRUCTURES :
/*
User defined data types.
using structurs it allows to combine data types of different types.
it is used to create a complex data type which contains diverse information .
*/

//syntax of structures :
/*
struct structure_name{
    data_type variable1;
    data_type variable2;
    .
    .

}structures variables;
*/
//decration of structures:
//(1)
#include <stdio.h>
#include <string.h>
struct student{
    int id;
    float marks ;
    char name[20];
}student1,student2,student3;  //method 2...
// struct student abhinav,ravi,roy;   //first way to declare variables as structures ..
int main()
{
  //initialisation of a structure:
student1.id=101;
student1.marks=89.5;                 
strcpy(student1.name,"Abhinav Singh");                            //we can access array using dot operator(.)..shown below
printf("The id of student 1 is %d ,his obtained marks are %f and his name is %s\n",student1.id,student1.marks,student1.name);

student2.id=102;
student2.marks=85.5;
strcpy(student2.name,"Ravi Singh");
printf("The id of student 2 is %d ,his obtained marks are %f and his name is %s\n",student2.id,student2.marks,student2.name);

student3.id=103;
student3.marks=79.00;
strcpy(student3.name,"Roy Singh");
printf("The id of student 3 is %d ,his obtained marks are %f and his name is %s\n",student3.id,student3.marks,student3.name);

}