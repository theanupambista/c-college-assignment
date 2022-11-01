#include <stdio.h>
int main()
{
    int num;
    FILE *fp;
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    fp = fopen("number.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);
    fp = fopen("number.txt", "r");
    for (int i = 1; i <= 10; i++)
    {
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
    }

    fclose(fp);
}