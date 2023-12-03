/*enter a number and check whether it is positive or negative*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a>0)
    printf("%d is positive",a);
    else
    printf("%d is negative");
    return 0;
    }