#include <stdio.h>
#include <conio.h>
int main(){
    int arr1[50][50],r,c,i,j;
    printf("enter the number of rows and column you want :");
    scanf("%d%d",&r,&c);
    printf("enter the elements of array:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("the array is:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}