/*convert decimal to binary*/
#include<stdio.h>
void decimaltobinary(int n){
    if (n==0){
        printf("binary:0");
        return;
    }
    int binary[32];
    int i=0;
    while (n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    printf("binary:");
    for (int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}
int main(){
    int decimal;
    printf("enter a decimal number:");
    scanf("%d",&decimal);
    decimaltobinary(decimal);
    return 0;
}