// calculate area and perimeter of rectangle

#include<stdio.h>
int main(){
    int length,width;
    printf("Enter the length and width: ");
    scanf("%d%d",&length,&width);
    printf("The area of rectangle is %d\n",length*width);
    printf("The perimeter of rectangle is %d\n",2*(length+width));
    return 0;
}