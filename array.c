#include<stdio.h>
int main (){
    int numbers[5];
    printf("enter numbers\n");
    for(int i=0;i<5;i++){
        printf("enter number for index %d",i);
        scanf("%d",&numbers[i]);
    }
    printf("the elemets of array are ");
    for(int i=0;i<5;i++){
        printf("numbers [%d]=%d",i,numbers[i]);
    }

    
    return 0;
}