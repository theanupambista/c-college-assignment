#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    int agg, perctange;
    printf("Enter the marks obtained in 5 subjects: ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    agg = sub1+sub2+sub3+sub4+sub5;
    perctange = agg / 5;
    printf("The aggregate marks is %d\n",agg);
    printf("The percentage is %d\n",perctange);
    return 0;
}