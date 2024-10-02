/* Fibonacci series :
The Fibonacci sequence is a type series where each number is the sum of the two that precede it.
it starts with 0 and 1.
0 , 1 ,1, 2 , 3 , 5 , 8...*/

#include <stdio.h>
int fib_recursion(int n){
    if (n == 1){
        return 0;
    }
    else if(n== 2){
        return 1;

    }
    else{
        return (fib_recursion(n-1) + fib_recursion(n-2));

    }
}
int main(){
    int a;
    printf("Enter the position of series you want to know the num of:");
    scanf("%d",&a);
    printf("the number at %d position is %d",a,fib_recursion(a));
    return 0;
}
