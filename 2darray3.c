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
            

        }
    } for ( int i=0;i<x;i++){
        int sum =0;
        for(int j=0;j<y;j++){
            sum =sum+arr[i][j];
        }
    }
        printf("sum of %d row=%d\n", i+1,sum);
// sum of each column 
for (int j=0;j<y;j++){
    int sum=0;
    for(int i=0;i<x;i++){
    sum+=arr[j][i];
    }

printf("sum of %d column=%d\n",i+1,sum);
} 
    
    return 0;
}