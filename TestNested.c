#include <stdio.h>
int main()
{
    int n;
    int x;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=x; i>0; i--)
    {
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==i)
            {
                printf(">> ");
            } else printf("== ");
        }
        printf("\n");
    }
     for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==i)
            {
                printf(">> ");
            } else printf("== ");
        }
        printf("\n");
    }
    }
    return 0;
}