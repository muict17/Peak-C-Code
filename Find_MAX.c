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
    max = num[0];
    min = num[0];
    for(i=1; i<n; i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    printf("%d ", max);

    return 0;
}