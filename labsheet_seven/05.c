#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("D:/student.txt", "w");
    if (fp == NULL)
    {
        printf("can't open");
    }
    printf("Enter name: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fputc('\n', fp);
    printf("Enter roll: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fputc('\n', fp);
    printf("Enter address: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fputc('\n', fp);
    printf("Enter marks: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fputc('\n', fp);
    fclose(fp);
    return 0;
}