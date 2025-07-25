#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};
struct queue* front=NULL,*rear=NULL;

void enqueue(int val){
    struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
    if(temp==NULL){
        printf("Queue overflow !!!\n ");
    }
    else{
        temp->data=val;
        temp->next=NULL;
        if(front == NULL){ // empty queue
            front = rear = temp;
        }
        else{
            rear->next = temp;
            rear=temp;
        }
        printf("%d inserted in queue\n",val);
    }
}
int dequeue(){
    if(front == NULL){
        printf("Queue Underflow !!!\n");
        return -1;
    }
    else{
        int val=front->data;
        struct queue* temp = front;
        front = front->next;
        if(front == NULL){
            rear=NULL;
        }
        free(temp);
        return val;
    }
}
int peek(){
    if(front == NULL){
        printf("Queue is empty !!!\n");
        return -1;
    }
    else{
        return front->data;
    }
}
void show(){
    if (front == NULL)
    {
        printf("Stack is empty !!!\n");
    }
    else
    {
        printf("Stack elements are : \n");
        struct queue *temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n\n");
    }
}
int main()
{
    while (1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Peek\n4.Show\n5.Exit\n");
        int choice, val, res;
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value : ");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            val = dequeue();
            if (val != -1)
            {
                printf("%d pop from the queue\n", val);
            }
            break;
        case 3:
            val = peek();
            if (val != -1)
            {
                printf("Top element in the queue = %d\n", val);
            }
            break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice !!!\n");
        }
    }
    printf("\n");
}
