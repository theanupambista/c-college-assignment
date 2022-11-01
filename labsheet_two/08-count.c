#include<stdio.h>
#include<string.h>
int main(){
    int positive=0,negative=0,zeros=0,num;
    char stop = 'n';
    while(stop == 'n'){
        printf("enter the num: ");
        scanf("%d",&num);
        if(num > 0){
            positive++;
        } else if(num < 0){
            negative++;
        } else {
            zeros++;
        }
        printf("Do you want to stop(y/n): ");
        scanf(" %c",&stop);
    }
    printf("Total positive number entered: %d\n",positive);
    printf("Total negative number entered: %d\n",negative);
    printf("Total zeros entered: %d",zeros);
}