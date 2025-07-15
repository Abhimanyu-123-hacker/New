#include<stdio.h>//wapp to perform the sum of diagonal elements.
int main(){
int sum=0,x,y,sum1=0;
printf("enter the rowsize and columnsize ");
scanf("%d %d",&x,&y);


int arr[x][y];
printf("enter the %d elements");

for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        scanf("%d",&arr[i][j]);
    }
}for(int i=0;i<x;i++){
    sum=sum+arr[i][j];
    
}
for(int i=0;y=x-1;i<x && j>=0 ; i++;j--){
    sum1+=arr[i][j];
}
printf("sum of right diagonal %d elements is %d\n",sum);
printf(sum of left diagonal %d elements is %d\n",sum1);




    return 0;
}