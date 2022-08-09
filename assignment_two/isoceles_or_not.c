#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || b==c || c==a){
        printf("The given triangle is isoceles.");
    } else {
        printf("The given triangle is not isoceles.");
    }
}