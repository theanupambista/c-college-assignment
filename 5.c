#include<stdio.h>
int main(){
    int length, breadth, area, perimeter;
    printf("Enter the length(in cm): ");
    scanf("%d",&length);
    printf("Enter the breadth(in cm): ");
    scanf("%d",&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("--------------User Input-----------------\n");
    printf("Length: %dcm\n",length);
    printf("Breadth: %dcm\n",breadth);
    printf("--------------Result---------------------\n");
    printf("Area of rectangle: %dcm^2\n",area);
    printf("Perimeter of rectangle: %dcm\n",perimeter);
    return 0;

}