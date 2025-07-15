#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter array size");
    scanf("%d",&n);// this type of array only be declared but no be initialized by the user.
    int numbers[n];
    printf("enter %d elements",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    
    for(int i=0;i<n;i++){
    sum = sum+numbers[i];
    }
            printf("%d ",sum);
    return 0;
}