#include<stdio.h>
 struct student{
    int roll_number;
    char name[30];
    char branch[10];
    char section[10];
    float marks;
};
int main(){
    struct student s1={1001,"Abhimanyu kumar","cse","a1",89};
    printf("roll number=%d\n",s1.roll_number);
    printf("name=%s\n",s1.name);
    printf("branch=%s\n",s1.branch);
    printf("section=%s\n",s1.section);
    printf("marks=%.2f\n",s1.marks);
    return 0;
}