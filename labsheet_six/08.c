#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *ptr, count = 0;
    printf("Enter the number of emp: ");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < num; i++)
    {
        if (*(ptr + i) > 80)
        {
            count++;
        }
    }
    printf("number of employee older than 80 years are %d", count);
    return 0;
}