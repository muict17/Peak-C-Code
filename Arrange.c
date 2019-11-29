#include <stdio.h>
int main()
{
    int n; 
    int i; 
    int max;
    int min;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    // max = num[0];
    // min = num[0];
    // for(i=1; i<n; i++)
    // {
    //     if(num[i]>max)
    //     {
    //         max = num[i];
    //     }
    //     if(num[i]<min)
    //     {
    //         min = num[i];
    //     }
    
    //printf("%d ", max);
    int b;

    for(int j=0; j<n-1; j++)
    {
        for (i = 0; i < n-j-1; i++)
        {
            if (num[i]>num[i+1])
            {
                b=num[i];
                num[i]=num[i+1];
                num[i+1]=b;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}