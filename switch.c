// wap to take number as an input and print day name corresponding to that day number. 

#include<stdio.h>
int main(){
    int dayno;
    printf("enter day nuber:");
    scanf("%d",&dayno);
    switch(dayno)
    {
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5: 
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;
        default :
        printf("invalid day number");

    }
    return 0;

}


