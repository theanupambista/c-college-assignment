#include<stdio.h>
int sum(int num){
    if(num == 1){
        return 1;
    }
    return num + sum(num - 1);
}
int main(){
    int result = sum(20);
    printf("The sum of first 20 numbers is %d",result);
    return 0;
}