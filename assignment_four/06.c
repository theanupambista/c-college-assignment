// wap to convert entered number of seconds into hours, minutes and seconds.
#include<stdio.h>
int main(){
    int sec;
    printf("Enter the number of seconds: ");
    scanf("%d",&sec);
    printf("%d seconds is %d hours, %d minutes and %d seconds",sec,sec/3600,(sec%3600)/60,(sec%3600)%60);
    return 0;
}