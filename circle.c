/*calculate the area and circumference of a circle*/
#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("enter the radius of a circle");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("the area of the circle is:%f",area);
    printf("the circumference of the circle is:%f",circumference);
    return 0;
}