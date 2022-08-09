#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("The factorial of %d!=",num);
    for(i=num;i>0;i--){
        if(i>1){
            printf("%d*",i);
        } else {
            printf("%d",i);
        }
    }
}