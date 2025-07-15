// #include<stdio.h>
//int main(){
  //  int marks[5]={453,398,432,278,312};
    //printf("array elements are :");
    //for( int i=0;i<5;i++){
      //  printf("%d ",marks[i]);
    //}
    //return 0; 
//}

#include<stdio.h>
int main(){
    int n;
    printf("enter array size");
    scanf("%d",&n);// this type of array only be declared but no be initialized by the user.
    int marks[n];
    printf("enter %d elements",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("array elements are :");
    for(int i=0;i<n;i++){
        printf("%d ",marks[i]);
    }
    return 0;
}