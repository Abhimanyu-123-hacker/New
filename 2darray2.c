#include<stdio.h>//wap to perform the sum of all the lements of 2d array.
int main(){
    int x,y,sum=0;
    printf("enter the number of rows");
    scanf("%d",&x);
    printf("enteer the number of columns");
    scanf("%d",&y);
    

    int arr[x][y];
    printf("enter  2d array elements:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d ",&arr[i][j]);
            sum+=arr[i][j];

        }
    }
    
    printf("%d ",sum);
    return 0;
}