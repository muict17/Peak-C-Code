#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int ai[n][m];
    int add[n];
    int i;
    int j;
    int add_row = 0;
    int max = 0;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            scanf("%d",&ai[i][j]);
        }
    }
    for (i = 0;i < n;i++)
    {
        add[i] = 0;
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            add[i] += ai[i][j];
        }
    }
    max = add[0];
    for (i = 1;i < n;i++)
    {
        if (max < add[i])
        {
            add_row = i;
            max = add[i];
        }
    }
   printf("%d",add_row+1);
    return 0;
}