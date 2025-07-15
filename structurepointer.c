#include<stdio.h>
struct book {
    int book_ID;
    char book_name[30];
    int book_price;
};
int main(){
    struct book b1;
    struct book *ptr=&b1; 
    printf("enter book ID");
    scanf("%d", &ptr->book_ID);
    printf("enter book name:");
    scanf("\n%[^\n]*c",ptr->book_name);
    printf("enter book price");
    scanf("%d",&ptr->book_price);

    printf("book ID=%d\n",ptr->book_ID);
    printf("book name=%s\n",ptr->book_name);
    printf("book price=%d\n",ptr->book_price);
    return 0;






}