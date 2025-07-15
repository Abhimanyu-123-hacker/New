#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //logic to find 2 nd largest element element begin here 
    int max1 =arr[0];
    int max2=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }
    printf("2nd largest element in an array is %d",max2);
    return 0;
}