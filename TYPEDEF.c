//TYPEDEF:
// it is used to change the name of any data type or we can say that it will give a nick name to a 
// data type...

/*
syntax:
typedef previous_name alias_name;
*/
//type def with sturctures :
#include <stdio.h>
#include <string.h>
typedef struct student{
    int id;
    char name[20];
    }std;


void main(){
    // we can also use student as datatype...

    struct student s1,s2;
    s1.id=103;
    strcpy(s1.name,"abhay");
    s2.id=102;
    strcpy(s2.name,"abhinav");
    printf("the id of s1 is %d and name is %s\n",s1.id,s1.name);
    printf("the id of s2 is %d and name is %s\n",s2.id,s2.name);

    //we can also use its new name as std ..      (NOT WORKING!!!!!!!)

    // struct std s1,s2;
    // s1.id=103;
    // strcpy(s1.name,"abhay");
    // s2.id=102;
    // strcpy(s2.name,"abhinav");
    // printf("the id of s1 is %d and name is %s\n",s1.id,s1.name);
    // printf("the id of s2 is %d and name is %s\n",s2.id,s2.name);


    //TYPEDEF with POINTERS.....

    int* a,b; //it will only make a as a pointer and b as integer .
    int x=10;
    a=&x;
    // b=&x;  will show error ..
    b=x;
    printf("%p, %d\n",a,b);
    // but if we use type type as--
    
    typedef int* intpointer;
    intpointer c,d; //it will make both as pointer ..
    int y=11;
    c=&y;
    d=&y;
    // d=y;  will show arror this time...
     printf("%p, %d",c,d);

}