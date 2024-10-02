// for using strings function we have a defined library in C..i.e <string.h>

#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20],str3[20];
        printf("Enter your first name :\n");
    gets(str1);
    printf("enter your last name :\n");
    gets(str2);
      
    puts(str1);
    puts(str2);
    

    //(1)strcat()- used to concatinate(add) strings ...

//IMPORTANT  //  printf("MY NAME IS %s\n",strcat(str1,str2)); //it will copy the string in 2 in 1,,i.e why str1 getting changed... 

    //char str3[80]=strcat(str1,str2);  this cannot be done ...

    //strlen()- used to find length of string .., it will not count null character in the length 
      
    printf("the length of string 1 is %d\n",strlen(str1));  //???????why it is giving strcat length (see line 18)
    printf("the length of string 2 is %d\n",strlen(str2));
    // puts(strlen(str1));   it will show error ,, puts is onlyy use to print the string only..

    //strrev()- to reverse string..

    puts(strrev(str2));
    puts(strrev(str1));

    //strcpy()- it will copy string in given string..

    strcpy(str3,strcat(str1,str2));
    puts(str3);

    // strcmp()- compare two strings ..
    char str4[20]="abhay",str5[20]="chauhan";
    printf("%d",strcmp(str4,str5));  
//if ascii value of first element of str4 is greater than that of str5 thhen it will return 1..
//if ascii value of first element of str4 is less than that of str5 thhen it will return -1..
//if ascii value of first element of str4 is greater than that of str5 thhen it will compare second and so on..
//but if strings are sam ethen it will return 0;
return 0;
}
