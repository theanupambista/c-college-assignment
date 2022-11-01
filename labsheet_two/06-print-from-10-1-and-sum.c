#include<stdio.h>
int main(){
    int sum=0,i=10;
    while(i>0){
        printf("%d ",i);
        sum = sum + i;
        i--;
    }
    printf("\nthe total sum is %d",sum);
    return 0;
}