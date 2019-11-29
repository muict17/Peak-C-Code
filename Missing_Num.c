
#include<stdio.h>
int main()
{
    int x;
    int i;
    int j;
    scanf("%d", &x);
    int ai[x];
    for(i = 0; i < x; i++)
    {
        scanf("%d", &ai[i]);
    }
    for(i = 0, j = 1; i < x; i++, j++)
    {
        if(ai[i] != j)
        {
            printf("%d ", j);
            i--;
        }
    }    
    return 0;
}