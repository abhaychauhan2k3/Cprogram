/*types of if statements :
(1)if statement : 
            syntax:
                    if(conditions){
                         .. code ..
                                  }  
                                  example ---  */

#include <stdio.h>

int main()
    {
        int age;

        printf("enter your age : ");
        scanf("%d",&age);

        if(age==18){
            printf("you became eligible for driving..!!!\n");
        }

         
  /* (2) if - else statement :
                          syntax:
                                if(conditions){
                                           ... code ...
                                               }
                                else {
                                    .. code .. 
                                      }
                                      example..... :*/
int marks;

printf("enter your marks out of 100 :");
scanf("%d",&marks);

if(marks >= 33){
         printf("YOU ARE PASS\n");
                  }
else{
    printf("YOU ARE FAIL.. WORK HARD!!!\n");
    }

/* (3)if - else if ladder:
                        syntax:
                                if (condition){
                                    .. code ...
                                              }
                                else if(condition 2){
                                      .. code ...
                                                    }
                                else{
                                  ..code..            (.....writing elae is optioinal...)
                                    } 
                                    example..... : */ 

int class;
printf("Enter your class:");
scanf("%d",&class);

if(class <= 5){
     printf("YOU ARE IN PRIMARY CLASSES..\n");
              }
else if (class <= 10 && class > 5){                     // here we use logical operators i.e and operator(&&)..
    printf("YOU ARE IN SECONDARY CLASSES..\n");
}
else if(class > 10 && class <= 12){
    printf("YOU ARE IN HIGHER CLASSES..\n");
}
else {
    printf("INVALID CLASS INPUTED...ENTER A VALID CLASS BETWEEN 1 TO 12.\n");
}

return 0;

    }

// we can also make nested if statements i.e if inside if ...!!!