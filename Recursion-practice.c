// program to add numbers from 1 to n using recursion 

#include <stdio.h>
int sum(int n){
    if (n==1){
        return 1;
    }
    else{
    return (n + sum(n-1));
        }
}
int main(){
    int num;
    printf("enter the number upto which you want the sum of natural numbers:");
    scanf("%d",&num);
    printf("the sum of natural numbers from 1 to %d is %d",num,sum(num));
    return 0;
}
