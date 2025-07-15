#include<stdio.h>
 struct student{
    int roll_number;
    char name[30];
    char branch[10];
    char section[10];
    float marks;
};
int main(){
   struct student s1;
   printf("enter the Roll number");
   scanf("%d",&s1.roll_number);
   printf("enter name\n");
   fflush(stdin);
   gets(s1.name);
   printf("enter branch name\n ");
   gets(s1.branch);
   printf("enter section");
   gets(s1.section);
   printf("enter marks");
   scanf("%f",&s1.marks);

    printf("roll number=%d\n",s1.roll_number);
    printf("name=%s\n",s1.name);
    printf("branch=%s\n",s1.branch);
    printf("section=%s\n",s1.section);
    printf("marks=%.2f\n",s1.marks);
    return 0;
}