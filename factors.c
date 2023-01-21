#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main(void)
{
    char *eptr;
    FILE *fp = fopen("t.txt", "r");
    if (fp == NULL)
    {
        perror("Unable to open file!");
        exit(1);
    }
    char chunk[128];
    while (fgets(chunk, sizeof(chunk), fp) != NULL)
    {
        printf("%d\n", strtoull(chunk, &eptr, 10) * 2);
    }
    fclose(fp);
}