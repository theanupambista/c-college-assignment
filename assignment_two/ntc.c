#include<stdio.h>
int main(){
    int calls;
    float amount;
    printf("Enter the calls:");
    scanf("%d",&calls);
    if(calls<=30)
        amount = 0;
    else if(calls<=60)
        amount = (calls-30)*0.50;
    else
        amount = 30*0.50 + (calls-60)*1;

    printf("The total amount paid by the customer is %.2f",amount);
}