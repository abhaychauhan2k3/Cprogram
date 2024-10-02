#include <stdio.h>
void revstar(int rows){
    for (int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            printf("*");
            printf("\t");
        }
        printf("\n\n");
    }
}
void star(int row){
    for (int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
            printf("\t");
        }
        printf("\n\n");
    }
}
int main(){
    int rows;
    printf("entre the half of rows you want :");
    scanf("%d",&rows);
    star(rows);
    revstar(rows);
    return 0;
}