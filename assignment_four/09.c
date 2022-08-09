#include<stdio.h>
int main(){
    int num;
    int ones, tens, hundred;
    printf("Enter 3 digit number: ");
    scanf("%d",&num);
    hundred = num / 100;
    tens = (num % 100) / 10;
    ones = num % 10;
    printf("The reverse number is %d%d%d",ones,tens,hundred);
    return 0;


}