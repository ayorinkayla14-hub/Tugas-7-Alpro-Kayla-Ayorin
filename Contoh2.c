#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("data_missing.csv", "r");

    if (fp == NULL)
    {
        perror("data_missing.csv");
        return 1;
    }


    fclose(fp);
    return 0;
}