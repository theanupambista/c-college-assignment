#include<stdio.h>
int power(int a,int b){
    int result = 1;
    while(b>0){
        result *= a;
        b--;
    }
    return result;
}
int main(){
    int a,b;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    int result = power(a,b);
    printf("the result is %d",result);
    return 0;
}