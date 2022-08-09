#include<stdio.h>
int main(){
    float centigrade,fahrenheit;
    printf("Enter the temp in centigrade: ");
    scanf("%f",&centigrade);
    fahrenheit = centigrade * 9 / 5 + 32;
    printf("Centigrade to fahrenheit is %.2f",fahrenheit);
    return 0;
}