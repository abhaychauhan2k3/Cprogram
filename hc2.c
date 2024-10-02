#include <stdio.h>
#include <string.h>
int  main(){
    int n,r,sum=0;
    scanf("%d",&n);  //taking a five digit number ..
    while(n>0){
               r=n%10;
               sum=sum+r;
               n=n/10;
    }
    printf("%d",sum);
    return 0;
    
}