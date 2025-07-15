//wap to store the information of student marks using structure and find total marks .
#include<stdio.h>
struct  student 
{
    int roll_number;
    char name[30];
    int marks[5];

};
int main(){
    struct student s1;
    int total=0;
    printf("enter Roll number");
    scanf("%d",&s1.roll_number);
    printf("enter name");
    fflush(stdin);
    gets(s1.name);
    printf("enter five subject marks");
    for(int i=0;i<5;i++){
        scanf("%d",&s1.marks[i]);
        total +=s1.marks[i];

    }
    printf("roll  number=%d\n",s1.roll_number);
    printf("name=%s\n",s1.name);
    printf("total marks=%d\n",total);
    return 0;





}