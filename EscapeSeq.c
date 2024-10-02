// Character used in formatting the output .. and not displayed on the screen while printing..

/*some of them are - \n : for adding new line
\t : for tab spaces 
\" or \' : to print double or single quote in the output*/ 

//if we want to print \n or any other escape sequence in the output then we will print it tis way..:

#include <stdio.h>

int main()
{
    printf("here \\n ,\\t, \\ , \' ,\" , \\' are printed sucessfully...");

    return 0;

}