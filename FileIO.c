#include <stdio.h>

// int main()
// {
//     FILE *file;
//     char buffer[100];
//     file = fopen("test.txt", "r");
//     fgets(buffer, 100, file);
//     printf("%s\n", buffer);
//     fclose(file);
//     return 0;
// }

// int main(){
//     FILE *file;
//     char buffer[] = "New Data";
//     file = fopen("test.txt", "w");
//     fputs(buffer,file);
//     fclose(file);
//     return 0;
// }

int main(){
    FILE *file;
    char buffer[] = "\n Hello";
    file = fopen("test.txt", "a");
    fputs(buffer,file);
    fclose(file);
    return 0;
}