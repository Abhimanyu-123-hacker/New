#include<stdio.h>
int main(){
    int r,c;
    printf("enter the values of r and c");
    scanf("%d %d",&r,&c);
    int matrix1[r][c],matrix2[r][c],result[r][c];
    printf("enter the elemets of matrix1");
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the elemets of matrix2");
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix2[i][j]);}
    }

for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("/n");

}


    return 0;
}