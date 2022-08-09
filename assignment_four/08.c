#include<stdio.h>
int main(){
    int mm;
    int km,m,cm;
    printf("Enter the length: ");
    scanf("%d",&mm);
    km = mm / 1000000;
    m = (mm % 1000000)/1000;
    cm = ((mm % 1000000) % 1000)/100;
    printf("%d:%d:%d",km,m,cm);
    return 0;

    // 1234000 / 1000000 = 1 
    // 1234000 % 1000000 = 234000
    // 234000 / 1000 = 234
}