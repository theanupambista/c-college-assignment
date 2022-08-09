#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float rootOne,rootTwo;
    printf("Enter 3 coefficent of quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    rootOne = (-(b)+sqrt(pow(b,2)-4*a*c))/2*a*c;
    rootTwo = (-(b)-sqrt(pow(b,2)-4*a*c))/2*a*c;
    printf("Two roots are %.2f and %.2f",rootOne,rootTwo);
    return 0;
}