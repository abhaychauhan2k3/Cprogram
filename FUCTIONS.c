/*FUNCTIONS:
Functions are used to divide a large C program into smaller pieces.
it can be called multiple times as per the reusability and modularity of the C program.
it is also called procedure or subroutine.
 SYNTAX:
        return_type function_name(data_type parameter 1; data_type parameter 2;....)
        {
            ...code to be executed.....
        }
*/
// Function is declared in the pre processing statements and then it can be called in main()..

/*function code examples..
(1)With arguements and with return value:*/
//(2)without arguement with return value.
//(3)with arguement without return value.
//(4)without arguement and without return value.

#include <stdio.h>
int product(int a, int b){      //this is having arguement as well as return value..type(1)
    return a*b;
                         }

int takenum(){      //this is having no arguements but having a return value...(2)
    int num;
    printf("enter a number you want to print :\n");
    scanf("%d",&num);
    return num;   //it can also be written as--- return ("%d", num);
}

void printstar(int n){   //this is having no return ...i.e why given as void..arguement given as n..(3)

    for (int i=0;i<n;i++){
        printf("%c\n",'*');
            }
}

int simpleprint(){     //no agruement pass in this and not even return value has given...(4)
    printf("hey, no agruement required to print me and not even return value needed..");
}

int main(){
    int a,b;

  printf("Enter the first number you want to muptiply:\n");
  scanf("%d",&a);
  printf("Enter the second number :\n");
  scanf("%d",&b);
  int c= product(a,b);
  printf("the product is %d\n",c);

  int d=takenum();
  printf("\nthe num is %d\n",d);

  printstar(10);
  simpleprint();

  return 0;
  
}
