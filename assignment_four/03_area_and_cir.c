#include<stdio.h>
int main(){
    // calculate the area and circumference of circle 
    int radius;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    printf("The area of circle is %.2f\n",3.14*radius*radius);  
    printf("The circumference of circle is %.2f\n",2*3.14*radius);
    return 0;
}