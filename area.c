// wap to print the area of circle square and rectangle
#include<stdio.h>
int main(){
    float r,area,side,l,b;
    printf("enter the value of r");
    scanf("%f",&r);
    area=3.141*r*r;
   printf("%.2f",area);


   printf("\nenter the value of side");
   scanf("%f",&side);
   area=side*side;
   printf("%.2f",area);


   printf("\nenter the value of l,b");
   scanf("%f %f",&l,&b);
   area=l*b;
   printf("%.2f",area);
    
    
    return 0;

}