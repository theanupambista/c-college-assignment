#include<stdio.h>
void isPrime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num % i == 0){
            printf("%d is not a prime number.",num);
            break;
        }
    }
    if(i==num){
        printf("%d is prime number.",num);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    isPrime(num);
    return 0;
}