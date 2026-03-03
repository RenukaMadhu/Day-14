#include<stdio.h>
#include<math.h>
void main() {
    float x1,y1,x2,y2,distance;
    printf("enter x1 and y1:");
    scanf("%f%f",&x1,&y1);
    printf("enter x2 and y2:");
    scanf("%f%f",&x1,&y1);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance between points:%.2f\n",distance);
}