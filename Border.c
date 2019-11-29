#include <stdio.h>
int main()
{
    int n;
    int j;
    int i;
    scanf("%d", &n);
    n = n + 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i == 1 && j != 1 && j != n) || (i == n && j != 1 && j != n) || (j == n && i != 1 && i != n) || (j == 1 && i != 1 && i != n))
            {
                printf("x");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
