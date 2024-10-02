//TRIANGULAR PATTERN :
// #include <stdio.h>
// void star(int row){
//     for (int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//             printf("\t");
//         }
//         printf("\n\n");
//     }
// }
// int main(){
//     int rows;
//     printf("enter the number of rows you want :");
//     scanf("%d",&rows);
//     star(rows);
//     return 0;

// }

//REVERSE TRIANGULAR PATTERN:
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
int main(){
    int rows;
    printf("enter the number of rows you want :");
    scanf("%d",&rows);
    revstar(rows);
    return 0;
}