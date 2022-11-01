#include<stdio.h>
int main(){
    struct date{
        int year;
        int month;
        int day;
    }d1;
    printf("Enter year month and day: ");
    scanf("%d%d%d",&d1.year,&d1.month,&d1.day);
    printf("%d/%d/%d\n",d1.year,d1.month,d1.day);
    return 0;
}