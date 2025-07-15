#include<stdio.h>//wap to read and display the elements of 2d array(matrix)
int main(){
    int arr[4][3];
    printf("enter  2d array elements:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            scanf("%d ",&arr[i][j]);

        }
        
    }


    printf("elements of 2d array are:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}