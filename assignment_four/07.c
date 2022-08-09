// wap to convert entered number of days into years, months and days.
#include<stdio.h>
int main(){
    int days;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    printf("%d days is %d years, %d months and %d days",days,days/365,(days%365)/30,(days%365)%30);
    return 0;
}