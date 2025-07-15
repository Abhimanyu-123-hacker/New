// wap to print the area of circle,triangle and rectangle on the basis of user choice.
#include<stdio.h>
int main(){
    system("cls");
 float r,l,b,area,side;
 int choice;
 printf("1.area of circle\n");
  printf("2.area of square\n");
 printf("3.area of rectangle\n");
 printf("enter choice :");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    
    printf("enter the value of r");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area of circle=%.2f",area);
    break;

    case 2:
        
    printf("enter the value of side");
    scanf("%f",&side);
    area=side*side;
    printf("area of square=%f",area);
    break;

    case 3:
        
    printf("enter the value of l and b");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("area of  rectangle =%f",area);
    break;

    default:
    printf("invalid choice!!!");
}
return 0;
}
