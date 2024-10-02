/*
PASSING ARRAYS TO A FUNCTION :
we can pass array to a function when we need to pass a list of values to given funtion.
we can pass arrays to a function :
a) by declaring array as a parameter in a function.
b)by declaring a pointer in the function to hold the base address of the array.
*/

//BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION:

// #include <stdio.h>
// void func(int array[])   //passing array as parameter...
// {
//     for (int i=0;i<4;i++){
//     printf("the value at %d index is %d\n",i,array[i]);
//     }
//     array[2]=33;    //------>{here the value at index 2 of array gets changed ...}
// }
// int main(){
//     int arr[]={1,3,44,2};
//     func(arr);
//     func(arr); //function is called again after changing the value at index 2 of array ..
// }


//BY PASSING ARRAY'S BASE ADDRESS TO THE FUNCTION:

#include <stdio.h>
int func1(int*ptr)   //we have declare a pointer ptr which will store the copy of adress of first element of array arr1..  
{
                for (int i=0;i<4;i++){
                    printf("the value at %d index is %d\n",i,*(ptr+i));
                                 }
                *(ptr+3)=5;  //value at index 3 is changed to 5..                 
                  
                }
int main(){
    int arr1[]={2,44,56,3};
    func1(arr1);  //it will pass address of first element of array arr1, same as by default ..
    
    func1(arr1); //funtion is called after changing the value at index 3..
return 0;
}