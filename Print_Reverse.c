#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    int ai[a];
        for(b = 0; b < a; b++)
        {
        scanf("%d", &ai[b]);
        }
        for(b = a - 1; b >= 0; b--)
        {
            printf("%d ", ai[b]);
        }
    return 0;
}