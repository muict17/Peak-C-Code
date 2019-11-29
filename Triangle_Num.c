#include <stdio.h>
int main()
{
    int i;
    int j;
    for(i = 0; i < 11; i++)
    {
        //printf("%d \n", i);
        for(j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}