//STRINGS :
/*String is not a data type in C.
we can express strings using an ARRAY OF CHARACTERS , terminated by a NULL character('\0) 
we use NULL character to tell the compiler that the string ends here.
*/

//CREATING A CHARACTER ARRAY :
/*
1)char name[]="abhay"  (if we pass string inside double quotes then we dont need to use null 
character ..compiler will itself adds it..)

2)char name[]={'a','b','h','a','y','\0'}  (here we use null pointer)
*/

//UNDERSTANDING MORER WITH A PROGRAM:
#include <stdio.h>
void printstring(char string[]){
    int i=0;
    while(string[i] != '\0'){
               printf("%c",string[i]);
               i++;

    }
    printf("\n");
}
int main(){
    char str2[50];
char str[6]={'A','b','h','a','y','\0'};   //array size should be greater than the length of the string.....
char str1[34]="Abhay";
printstring(str);
printstring(str1);

//taking string from the user :
printf("enter any string :\n");
gets(str2);

//printing a string by using a defined function..

puts(str2);

//we can also print string by using printf():

printf("%s",str2);
return 0;
}


//gets() and puts() comes under the library <stdio.h>....

