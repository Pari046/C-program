/*interchange two numbers without using third variable*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before swapping the value of%d and %d:",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swapping the value of %d and %d:",a,b);
    return 0;
}