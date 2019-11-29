#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a[x][x];
    int i;
    int j;
    //for (i = 1; i <= x; i++)
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // for (i = 0; i <= x; i++)
    // {
    //     for (j = 0; j <= x; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    // }

    for (i = 0; i < x; i++)
    {
        if (i % 2 == 1)
        {
            for (j = x - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (j = 0; j < x; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}