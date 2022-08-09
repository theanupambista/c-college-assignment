#include<stdio.h>
int main(){
    int num,result=0;
    int i;
    printf("Enter the num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        result += (i*i);
    }
    printf("The total is %d",result);
    return 0;
}