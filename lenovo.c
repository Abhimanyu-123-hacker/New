#include<stdio.h>
#include<math.h>

int main(){
    system("cls");
    float x1,y1,x2,y2,distance;
    printf("input the values of x1=");
    scanf("%f",&x1);
    printf("input the value of x2=");
    scanf("%f",&x2);

    printf("input the value of y1=");
    scanf("%f",&y1);
    printf("input the value of y2=");
    scanf("%f",&y2);

    distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("the euclidean distance is:%2f\n",distance);

    return 0;
}
