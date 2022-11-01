#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    // to work this program correctly you need to create test folder in d drive
    fp = fopen("D://test//student.txt", "r");
    if (fp == NULL)
    {
        printf("can't open");
    }
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}