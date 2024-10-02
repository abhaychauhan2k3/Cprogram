/*Pointers : pointers are the variables which store the address of another variable..
pointers can be assing by data_type * pointer_name = &variable_name*/
/*Dereference operator(*): also called indirection operator.
*pointer_name : value of variable whose address is stored in pointer */
#include <stdio.h>
int main()
{
    printf("lets learn about pointers..\n");
    int a= 20;
    int * ptra=&a;
    int * ptr=NULL;
    printf("the value of ptr is %d\n",ptr);
    printf("the address of ptr is %p\n",ptr);

    printf("the address of pointer is %p\n",&ptra);
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*ptra);
    printf("the address of a is %p\n",ptra);  //%p : used to print memory address in deecimal format.
                                            //if we use %d in place of %p then it will print address in integer format.
    printf("the address of a is %p\n",&a);
    printf("the address of a in hexadecimal place is %x\n",ptra);   /*%x : used to print the
                                memory locatiion of variable in hexadecimal form.*/
/*NULL pointer : the pointer to which no value is assing but NULL.  ex- int * ptr = NULL; */
    
    return 0;
}