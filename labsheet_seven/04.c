#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("test.txt", "a");
    printf("Enter your name: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}