#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}