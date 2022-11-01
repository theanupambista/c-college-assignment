#include<stdio.h>
#include<math.h>
int main(){
    int num, power,result;
    printf("enter the first num: ");
    scanf("%d",&num);
    printf("enter the second num: ");
    scanf("%d",&power);
    result = pow(num,power);
    printf("the result is %d",result);
    return 0;
}