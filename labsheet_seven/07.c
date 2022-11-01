#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("new1.dat", "w");
    printf("Enter some text: ");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("new1.dat", "r");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}