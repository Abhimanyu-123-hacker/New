#include<stdio.h>
struct  student 
{
    int roll_number;
    char name[30];
    int marks[5];
    int total;

};
int main(){
    struct student s1,s2;
   
    printf("enter Roll number  of s1");
    scanf("%d",&s1.roll_number);
    printf("enter name");
   scanf("\n%[^\n]s",s1.name);
    printf("enter five subject marks");
    s1.total=0;
    for(int i=0;i<5;i++){
        scanf("%d",&s1.marks[i]);
        s1.total +=s1.marks[i];
    }
         printf("enter Roll number  of s2");
    scanf("%d",&s2.roll_number);
    printf("enter name");
   scanf("\n%[^\n]s",s2.name);
    printf("enter five subject marks");
    s2.total=0;
    for(int i=0;i<5;i++){
        scanf("%d",&s1.marks[i]);
        s2.total +=s2.marks[i];
    

    }
    printf("roll  number=%d\n",s1.roll_number);
    printf("name=%s\n",s1.name);
    printf("total marks=%d\n",s1.total);

    printf("roll  number=%d\n",s2.roll_number);
    printf("name=%s\n",s2.name);
    printf("total marks=%d\n",s2.total);
    return 0;

   





}