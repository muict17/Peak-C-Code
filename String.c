#include <stdio.h>
#include <string.h>
#define n 100
int main()
{
    char str1[n] = "Yeet";
    char str2[n] = " Life";
    char str3[n];
    int len;
    strcpy(str3, str1);
    printf("Copy String 1 to String 3 : %s\n", str3);
    strcat(str1, str2);
    printf("Concatenates : %s\n", str1);
    len = strlen(str1);
    printf("String Lenght : %d\n", len);
    return 0;
}
