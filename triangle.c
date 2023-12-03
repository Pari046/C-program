/*calculate the area of a triangle*/
#include<stdio.h>
int main()
{
    int b,h,area;
    printf("enter the breadth and height of the triangle");
    scanf("%d%d",&b,&h);
    area=1/2*b*h;
    printf("the area of the triangle is=%d",area);
    return 0;
}