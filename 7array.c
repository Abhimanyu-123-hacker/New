#include<stdio.h>
int main(){
     int r1,c1;
    printf("enter the values of r1 and c1");
    scanf("%d %d",&r1,&c1);
    int matrix1[r1][c1];
    printf("enter the elemets of matrix1");
    for(int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    
     int r2,c2;
    printf("enter the values of r2 and c2 ");
    scanf("%d %d",&r2,&c2);
    int matrix2[r2][c2];
    printf("enter the elemets of matrix2");
    for(int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
//logic of multiplication 