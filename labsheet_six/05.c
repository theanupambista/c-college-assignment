#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a   = *b;
    *b   =  temp;
}
int main(){
    int a=5;
    int b= 10;
    swap(&a,&b);
    printf("A: %d\nB: %d",a,b);
}