#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    fputs("Welcome to my college", fp);
    fclose(fp);
    return 0;
}