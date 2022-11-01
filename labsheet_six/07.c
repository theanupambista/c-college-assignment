#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *ptr;
    printf("enter the value for n(size)\n");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
        scanf("%d", (ptr + i));

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                int a = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = a;
            }
        }
    }
    printf("elements\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}