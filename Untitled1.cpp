//Lab experiment 10
#include<stdio.h>
#include<stdlib.h>
#define INT_MIN 100
struct Node{
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL)
       printf("stack Overflow!!!\n");
    else{
        temp->data = value;
        temp->next = top;
        top = temp;
        printf("push %d into the stack\n",value);
    }
}
int pop(){
   if(top == NULL){
    printf("Stack Underflow !!!");
    return -1;
   }
   else{
       int val = top->data;
       struct Node* temp = top;
       top = top->next;
       free(temp);
       return val;
   }
}
int peek(){
    if(top == NULL){
        printf("Stack is empty !!!\n");
        return -1;
    }
    else{
        return top->data;
    }
}
void show(){
    if(top == NULL){
        printf("Stack is empty !!!\n");
    }
    else{
        printf("Stack Elements are : \n");
        struct Node* temp = top;
        while(temp != NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}
int main(){
    while(1){
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. show\n");
        printf("5. exit\n");
        int choice,val;
        printf("Enter choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter val : ");
            scanf("%d", &val);
             push(val);
            break;
         case 2:
            val = pop();
            if(val != INT_MIN)
               printf("%d is pop from the stack\n", val);
            break;
         case 3:
            val = peek();
            if(val != INT_MIN)
               printf("Stack top element is %d\n", val);
            break;
         case 4:
            show();
            break;
         case 5:
            exit(0);
            break;
         default:
            printf("Invalid Choice!!\n");
        }
        printf("\n");
        system("pause");
    }
    return 0;
}
