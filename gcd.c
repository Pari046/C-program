/*find gcd and lcm of two number*/
#include<stdio.h>
int gcd(int a,int b) {
while (b!=0)
{
int t=b;
b=a%b;
a=t;
}
return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b); 
}
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("gcd:%d\n",gcd(a,b));
    printf("lcm:%d\n",lcm(a,b));
    return 0;
}