#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("test.txt", "w");
    printf("Enter some text: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("test.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}