/*calculate average of five numbers*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("enter five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of the above 5 numbers is:%d",avg);
    return 0;
    }