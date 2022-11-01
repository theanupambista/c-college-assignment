#include<stdio.h>
int main(){
    struct book{
        char name[20];
        int pages;
        int price;
    }b1,*b1Pointer;
    b1Pointer = &b1;
    printf("enter book name pages and price: ");
    scanf("%s%d%d",&(*b1Pointer).name,&(*b1Pointer).pages,&(*b1Pointer).price);

    printf("Book name: %s\nPages: %d\nPrice: %d\n",(*b1Pointer).name,(*b1Pointer).pages,(*b1Pointer).price);
}