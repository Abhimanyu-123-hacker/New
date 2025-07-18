// lab experiment 13
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int tree[MAX];
int size = 0 ;
void init(){
    for(int i=0;i<MAX;i++){
        tree[i]=-1;
    }
}

void insert(int n){
    printf("Enter %d values\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&tree[size++]);
    }
}

void preorder(int root){
    if(tree[root] == -1){
        return;
    }
    printf("%d ",tree[root]);
    preorder(2*root +1);
    preorder(2*root +2);
}

void inorder(int root){
    if(tree[root] == -1){
        return;
    }
    inorder(2*root +1);
    printf("%d ",tree[root]);
    inorder(2*root +2);
}

void postorder(int root){
    if(tree[root] == -1){
        return;
    }
    postorder(2*root +1);
    postorder(2*root +2);
    printf("%d ",tree[root]);
}
int search(int target){
    for(int i=0;i<size;i++){
        if(tree[i]==target){
            return i;
        }
    }
    return -1;
}
void Delete(int value){
    int i = search(value);
    if(i==-1){
        printf("Element not found !!! \n ");
    }
    else{
        tree[i]=tree[size-1];
        tree[size]=-1;
        size--;
        printf("Element deleted !!! \n");
    }
}
int main(){
    init();
    int n,choice,target,value;
    while(1){
        printf("1. Insert\n2. Pre-order\n3. In-order\n4. Post-order\n5. Search\n6.Delete\n7.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value of n : ");
            scanf("%d",&n);
            insert(n);
            break;
            case 2:
            printf("\n Pre-Order : ");
            preorder(0);
            break;
            case 3:
            printf("\n In-Order : ");
            inorder(0);
            break;
            case 4:
            printf("\n Post-Order : ");
            postorder(0);
            break;
            case 5:
            printf("Enter the value of target : ");
            scanf("%d",&target);
            value = search(target);
            if(value != -1){
                printf("Found!!!\n");
            }
            else{
                printf("Not Found!!!\n");
            }
            break;
            case 6:
            printf("Enter the value : ");
            scanf("%d",&value);
            Delete(value);
            break;
            case 7:
            exit(0);
            default:
            printf("Invalid choice !! \n");

        }
    }
    return 0;

}
