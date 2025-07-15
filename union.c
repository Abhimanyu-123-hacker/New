#include<stdio.h>
struct book {
    int book_ID;
    char book_name[30];
    int book_price;
};
int main(){
    struct book b1;

    printf("enter book ID");
    scanf("%d", &b1.book_ID);
    printf("enter book name:");
    scanf("\n%[^\n]*c",b1.book_name);
    printf("enter book price");
    scanf("%d",&b1.book_price);

    printf("book ID=%d\n",b1.book_ID);
    printf("book name=%s\n",b1.book_name);
    printf("book price=%d\n",b1.book_price);
    return 0;






}