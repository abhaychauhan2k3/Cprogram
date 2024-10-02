//ARRAY :
 /*   Array is the collection of data items of same type, items are stored at contigous memory 
 locations.
 it can also store the collection of derived data types , such as - pointers , structures, etc.
 1-D array is like a list , 2-D array is like a table.
 in C programming there is no limits on the dimensions in an array.
 some text refer 1-d array as vectors and 2-d as matrices , and use the general term array when
 the dimensions is unspecified or unimportant.
 
 -> Code that use Arrays is sometimes more readable and organised.
 -> it is used to store multiple data items by using only single name .
 -> accessing an item in a given array is very fast.(an element of the array with given index 
 can be accesed very quickly by using its address which can be calculated using the base 
 address and its index.)
 -> each element in an array is of the same size.
*/
//Syntax:
        /*(1) data_type name[size]
          (2) data_type name[size] = {x, y,z,....}   *(size is not required in this one)
          (3) we can also initialise the array one by one by accessing it using its index :
                   name[0]=10 ; 
*/
#include <stdio.h>
  //array DECLARED..

int main()
{
//int marks[4] = {1,4,5,3};    ///METHOD 2....


int marks[4];       //METHOD 3.... to initialize the values to an arrayy...
marks[0]=10;
marks[1]=16;
marks[2]=7;
marks[3]=20;


//printf("enter the number of students whose marks yo want to store:\n");
//scanf("%d",&m);         (NOT WORKING LIKE THIS...)


/*for (int i=0;i<4 ; i++ ){              //METHOD 1...
        printf("\nenter the marks of %d student:\n",i);
        scanf("%d",&marks[i]);
                            }*/


for (int i=0;i<4;i++ ){
        printf("the marks of %d student is %d\n", i, marks[i]);         
                           }
return 0;

}