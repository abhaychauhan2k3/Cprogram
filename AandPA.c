#include <stdio.h>
int main()
{
    /*Pointers Arithematic:
    there are four type of arithematic opetartors that can be used on pointers....
    (1)++
    (2)--
    (3)+
    (4)-
    */
   //POINTERS ARITHEMATIC :

   /*int a = 21;
   a++;
   int *ptra=&a;
   printf("the value of ptra is %d\n",ptra);
   ptra = ptra + 1; (ptra ++ means ptra + 1  : so it will gonna add value of data type of 1 to address 
             stored in ptra named pointer ..)
             printf("the updated value of pointer ptra is %d\n",ptra);
             printf("the address of pointer ptra is %d\n",&ptra);

   return 0; */

   //ARRAY AND POINTERS :

   //declare an array -
   int arr[10]={1,2,10,33,65,8,9,809,7,6};
   int *ptr = arr;  //storing address of first element of array arr in pointer named ptr..(by default)
   printf("the value of ptr is %d\n",ptr);//i.e the address of first element of array arr.
   printf("the value of ptr is %d\n",&arr);
   printf("the adress of ptr is %d\n",&ptr);
   printf("the value at the 1st position of array arr is %d\n",arr[0]);
   printf("the value of the 2nd position of the array is %d\n",*(arr + 1));
   printf("the address of the value of array arr at second position is %d\n",&arr[1]);
   printf("the adress of the value of array arr at second position is %d\n",(arr + 1));
   printf("the adress of the value of array arr at third position is %d\n",(arr + 2));


   return 0; 

}                               