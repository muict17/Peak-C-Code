#include <stdio.h>
int main()
{
    int i;
    int j;
    int n;
    while (1)
    {
        scanf("%d", &n);    
            if (n <= 100 && n >= 2)
            {break;}
    }
            {
        for (j = 1; j<=n ; j++) 
    {
        for (i = 1; i<j+1; i++)
        {
            if(j % 2 == 0)
        {
            printf("[#]");
        }
        else
        {
            printf("[O]");
        }
        }
        printf("\n");
    }
        for (j = n - 1; j>0 ; j--) 
    {
        for (i = j; i>0; i--)
        {
            if(j % 2 == 0)
        {
            printf("[#]");
        }
        else
        {
            printf("[O]");
        }
        }
        printf("\n");
    }
    }

    return 0;
}