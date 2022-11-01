#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("D://test//evennumbers.txt", "w");
    for (int i = 10; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fp, "%d\n", i);
        }
    }
    fclose(fp);
    fp = fopen("D://test//evennumbers.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
}