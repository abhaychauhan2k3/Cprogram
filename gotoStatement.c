//GOTO STATEMENT : it is used to transfer the proegram control to the predefined label.
/*it is preferable when we need to break multiple loops by using a single statement at the same
time. IT TAKES US OUT OF NESTED LOOPS.*/

//Example:

#include <stdio.h>

int main()
{
int a;
printf("enter the number:\n");
scanf("%d", &a);
if(a==4){
    goto end;
}
printf("i am not gonna print if value input by the user is 4... as end statement is after me..\n");

end:
printf("i will be printed for all values ...");

return 0;
}

//Also known as jump statement..
//it is rarely used ... Complicated sometimes!!!