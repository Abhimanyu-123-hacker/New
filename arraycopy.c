#include<stdio.h>
int main(){
    int n;

    printf("enter size");
    scanf("%d",&n);
        int arr1[n],arr2[n];
        printf("enter %d elments",n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr1[n]);
        }
        for(int i=0;i<n;i++){
            arr2[n]=arr1[n];
        }
        printf("enter the elments of arr1[n]");
        for(int i=0;i<n;i++){
            scanf("%d",arr1[n]);
        }
        printf("enter the elements of arr2[n]");
        for(int i=0;i<n;i++){
            scanf("%d",arr2[n]);
        }



    return 0;
}