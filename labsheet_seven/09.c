#include <stdio.h>
int main()
{
    int num;
    FILE *fp;
    fp = fopen("natural.txt", "w");
    for (int i = 1; i <= 20; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    fp = fopen("natural.txt", "r");
    for (int i = 1; i <= 20; i++)
    {
        fscanf(fp, "%d", &num);
        printf("%d\n", num + num);
    }

    fclose(fp);
}